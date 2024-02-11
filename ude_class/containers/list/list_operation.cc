#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l = {10, 50, 70, 60, 20};

    for (auto el : l)
    {
        cout << el << " ";
    }
    cout << endl;

    // sort the list
    // sort(l.begin(), l.end()); // error: no matching function for call to 'sort(std::__cxx11::list<int>::iterator, std::__cxx11::list<int>::iterator)'
    l.sort();

    // elememts after sorting
    for (auto el : l)
    {
        cout << el << " ";
    }
    cout << endl;
    
}