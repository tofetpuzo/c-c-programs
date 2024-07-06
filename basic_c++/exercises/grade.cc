#include <iostream>
using namespace std;

int main(){

    int marks[5]; // Declare an integer array of size five

    cout << "Enter 5 marks:\n";
    double sum = 0; double average_mark;
    for(int i = 0; i < 5; ++i) {
        cin >> marks[i]; // Take input from the user and assign it to each element in the array
        sum+= marks[i];  
    }
   
    average_mark = sum / 5;
    if(average_mark  >= 70){
       cout << "Your grade is A " << endl;
    }

    else if(average_mark < 70){
        cout << "Your grade is B " << endl;
    }

    else if(average_mark < 65){
        cout << "Your grade is C " << endl;
    }

    return 0;

}