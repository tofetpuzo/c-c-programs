#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl1{1, 2, 3, 4, 5};
    forward_list<int> fl2{10, 20, 30, 40, 50};

    cout << "elements of fl1: ";
    for (auto i : fl1)
        cout << i << " ";
    cout << endl;

    cout << "elements of fl2: ";
    for (auto i : fl2)
        cout << i << " ";
    cout << endl;

    auto it = fl1.begin(); // iterator to the first element of fl1
    fl1.splice_after(it, fl2); // insert fl2 after it in fl1

    cout << "elements of fl1 after splice: ";

    for (auto i : fl1)
        cout << i << " ";
    cout << endl;

    cout << "elements of fl2 after splice: ";
    for (auto i : fl2)
        cout << i << " ";
    cout << endl;
    

}