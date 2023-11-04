#include <iostream>

class ExtractUrl {
public:
    // Constructor
    ExtractUrl(int value) {
        this->value = value;
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    // Member function
    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    // Create an object of MyClass
    ExtractUrl obj(42);

    // Call the member function
    obj.printValue();

    return 0;
}
