#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flist = {10, 20, 30, 40, 50};
    cout << "forward list elements: ";

    for (auto el : flist)
    {
        cout << el << " ";
    }
    cout << endl;

    auto second = flist.begin();
    advance(second, 1);   // i is an iterator to the second element
    flist.insert_after(second, 100); // Insert a new after the second element

    cout << "forward list elements after insertion: " << endl;
    for (auto el : flist)
    {
        cout << el << " ";
    }
    cout << endl;

    flist.erase_after(second); // Delete the element after the second element

    cout << "forward list elements after deletion: " << endl;
    for (auto el : flist)
    {
        cout << el << " ";
    }
    cout << endl;


}