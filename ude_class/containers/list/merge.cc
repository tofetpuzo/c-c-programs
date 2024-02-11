#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1{10, 20, 30};
    list<int> l2{40, 50, 60};
    list<int> l3{4, 5, 6};

    cout << "l1 after merge operation: " << endl;
    for (auto el : l1)
    {
        cout << el << " ";
    }
    cout << endl;

    cout << "l2 after merge operation: " << endl;
    for (auto el : l2)
    {
        cout << el << " ";
    }
    cout << endl;

    l1.sort();
    l2.sort();
    l1.merge(l2);

    cout << "l1 after merge operation: " << endl;
    for (auto el : l1)
    {
        cout << el << " ";
    }
    cout << endl;

    cout << "l2 after merge operation: " << endl;
    for (auto el : l2)
    {
        cout << el << " ";
    }
    cout << endl;

    auto p = l1.begin();
    advance(p, 2);
    l1.splice(p, l3);

    cout << "l1 after splice operation: " << endl;
    for (auto el : l1)
    {
        cout << el << " ";
    }
    cout << endl;
}