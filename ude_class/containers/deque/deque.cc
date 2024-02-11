#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> d1{3, 8, 1, 9, 2};

    d1.push_back(10);
    d1.push_back(93);
    d1.push_front(4);
    d1.push_front(5);
    d1.push_front(6);

    for (auto i : d1)
        cout << i << " ";
    cout << endl;
    

}