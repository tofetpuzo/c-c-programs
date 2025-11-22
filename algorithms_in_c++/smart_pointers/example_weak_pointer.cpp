#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void print(vector<shared_ptr<int>> vec) {
    cout << "Vector elements:";
    for (weak_ptr<int> p: vec) {
        auto ptr = p.lock();
        if(ptr) cout << *ptr << ", ";
        else cout << "delete element, ";
    }
    cout << endl;
}

int main(){
    vector<shared_ptr<int>> vec{
        make_shared<int>(36),
        make_shared<int>(42),
        make_shared<int>(58),
        make_shared<int>(73)
    };

    print(vec);

    cout << "Deleting vec[2]\n";
    vec[2] = nullptr;

    print(vec);
}