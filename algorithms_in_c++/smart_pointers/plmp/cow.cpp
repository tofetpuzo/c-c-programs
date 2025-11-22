// 1. Reference Counting with Copy-on-Write (COW)                                                      
#include <iostream>
#include <cstring>

                                                                                                    
class String {                                                                                      
private:                                                                                            
    struct StringData {                                                                             
        char* data;                                                                                 
        size_t length;                                                                              
        mutable int ref_count;  // mutable allows modification in const methods                     
                                                                                                    
        StringData(const char* str) : ref_count(1) {                                                
            length = strlen(str);                                                                   
            data = new char[length + 1];                                                            
            strcpy(data, str);                                                                      
        }                                                                                           
                                                                                                    
        ~StringData() {                                                                             
            delete[] data;                                                                          
        }                                                                                           
    };                                                                        
    StringData* body;  // shared pointer to data                                                    
                                                                                                    
public:                                                                                             
    // Constructor                                                                                  
    String(const char* str) {                                                                       
        body = new StringData(str);                                                                 
    }                                                                                               
                                                                                                    
    // Copy constructor - share the body                                                            
    String(const String& other) {                                                                   
        body = other.body;                                                                          
        ++body->ref_count;  // increment reference count                                            
    }                                                                                               
                                                                                                    
    // Assignment operator                                                                          
    String& operator=(const String& other) {                                                        
        if (this != &other) {                                                                       
            // Decrease current reference count                                                     
            if (--body->ref_count == 0) {                                                           
                delete body;                                                                        
            }                                                                                       
                                                                                                    
            // Share new body                                                                       
            body = other.body;                                                                      
            ++body->ref_count;                                                                      
        }                                                                                           
        return *this;                                                                               
    }                                                                                               
                                                                                                    
    // Destructor                                                                                   
    ~String() {                                                                                     
        if (--body->ref_count == 0) {                                                               
            delete body;                                                                            
        }                                                                                           
    }                                                                                               
                                                                                                    
    // Copy-on-Write for modifications                                                              
    char& operator[](size_t index) {                                                                
        if (body->ref_count > 1) {                                                                  
            // Make a private copy before modifying                                                 
            StringData* new_body = new StringData(body->data);                                      
            --body->ref_count;                                                                      
            body = new_body;                                                                        
        }                                                                                           
        return body->data[index];                                                                   
    }                                                                                               
                                                                                                    
    // Read-only access (no copy needed)                                                            
    const char& operator[](size_t index) const {                                                    
        return body->data[index];                                                                   
    }                                                                                               
                                                                                                    
    const char* c_str() const {                                                                     
        return body->data;                                                                          
    }                                                                                               
};      

int main() {                                                                                        
    std::cout << "=== Creating s1 ===" << std::endl;                                                
    String s1("Hello");                                                                             
                                                                                                    
    std::cout << "\n=== Creating s2 (copy) ===" << std::endl;                                       
    String s2 = s1;  // Shares memory                                                               
                                                                                                    
    std::cout << "\n=== Before modification ===" << std::endl;                                      
    std::cout << "s1: " << s1.c_str() << std::endl;                                                 
    std::cout << "s2: " << s2.c_str() << std::endl;                                                 
                                                                                                    
    std::cout << "\n=== Modifying s1[0] ===" << std::endl;                                          
    s1[0] = 'h';  // Triggers Copy-on-Write                                                         
                                                                                                    
    std::cout << "\n=== After modification ===" << std::endl;                                       
    std::cout << "s1: " << s1.c_str() << std::endl;                                                 
    std::cout << "s2: " << s2.c_str() << std::endl;                                                 
                                                                                                    
    std::cout << "\n=== End of main (destructors called) ===" << std::endl;                         
    return 0;                                                                                       
}                                                                                                   
              