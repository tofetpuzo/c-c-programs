#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec{3, 7, 8, 9, 20};

    // vector<int>::iterator it = vec.begin();

    auto it = vec.begin();

    while (it != vec.end())
    {
        /* code */
        cout << *it << ", ";
        ++it;

    }
    
}
