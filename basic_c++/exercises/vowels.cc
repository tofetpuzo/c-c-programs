#include <iostream>
using namespace std;
#include <cstring>
int main()
{

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "Enter the characters you will like to know" << endl;
    int count = 0;
    char letters[50];

    cin.getline(letters, 50);
    for (int i = 0; i < strlen(letters); i++)
    {
        for (int j = 0; j < strlen(vowels); j++)
        {
            if (letters[i] == vowels[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}