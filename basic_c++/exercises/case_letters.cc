#include <iostream>
using namespace std;
#include <cstring>
#include <cctype>

// * change the case of letters
int main(){

    char letters[50];
    
    cout<< "Enter letters: "<< endl;
    cin.getline(letters, 50);
    for (int i = 0; i < strlen(letters); i++)
    {
        /* code */
        if (isupper(letters[i])) {
            letters[i] = tolower(letters[i]);
        }
        else if (islower(letters[i])) {
            letters[i] = toupper(letters[i]);
        }
              
    }
    cout << "output= " <<  letters << endl;
    return 0;

}

// * find a length of string



// * count the vowels in a string

// * checkning the Palindrome
