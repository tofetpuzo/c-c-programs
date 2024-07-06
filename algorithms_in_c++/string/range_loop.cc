#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    vector<int> vec{3, 7, 8, 9, 20};
    // string vec{3, 7, 8, 9, 20};
    for (auto it = begin(vec) ; it != end(vec); ++it)
    {
        /* code */
        int& el = *it;
        el +=2;
        cout << "el= " << *it << endl;
    }

    int dis = distance(begin(vec), end(vec));

//  the advance method allow you to iterate by a certain amount of time
    // auto mid = begin(vec);
   

    // auto n = prev(end(vec));
    cout<< "el_dis= " << dis << endl;
    return 0;
}
