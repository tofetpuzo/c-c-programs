// #include <bits/stdc++.h>
#include <iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }


#include <cmath>
using namespace std;

int main() {

    float a, b, c, root1, root2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4*a*c;
    
    // if the roots are real and different
    if (determinant > 0) {
        root1 = (-b + sqrt(determinant)) / (2*a);
        root2 = (-b - sqrt(determinant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }
    
    else if (determinant == 0) {
        cout << "Roots are real and equal." << endl;
        root1 = -b/(2*a);
        cout << "x1 = x2 =" << root1 << endl;
    }
    // if the roots are complex and different
    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-determinant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
};
