#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> strings(5);

    cout << "Capture by reference:" << endl;
    [&strings]() { cout << "Size in lambda: " << strings.size() << endl; }(); // Immediately invoke the lambda
    cout << "After calling lambda size in main = " << strings.size() << endl;

    cout << "Capture by move:" << endl;
    [vs = std::move(strings)]() {
        cout << "Size in lambda: " << vs.size() << endl;
    }(); // Immediately invoke the lambda
    cout << "After calling lambda size in main = " << strings.size() << endl;
}