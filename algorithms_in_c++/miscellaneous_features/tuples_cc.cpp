#include <iostream>
#include <tuple>
#include <string>

using namespace std;


tuple<int, string, double> func() {
    return {40, "David", 80.0};
};


int main() {
    // Creating a tuple
    tuple<int, string, double> person(25, "Alice", 68.5);

    // Accessing tuple elements
    cout << "Name: " << get<1>(person) << endl;
    cout << "Age: " << get<0>(person) << endl;
    cout << "Weight: " << get<2>(person) << endl;

    // or use make_tuple() to create a tuple instance
    //auto another_person = make_tuple(30, "Bob", 75.0);

    auto x = get<0>(person);
    cout << "first element is : " << x << endl;

    cout << "setting second element to Charlie" << endl;
    get<1>(person) = "Charlie";

    // c++14 allows us to use the type as the parameter if unique
    auto i = get<int>(person);
    auto j = get<string>(person);
    auto k = get<double>(person);

    cout << "Age: " << i << endl;
    cout << "Name: " << j << endl;
    cout << "Weight: " << k << endl;

    cout << "====================== " << endl;
    // using tie to unpack tuple elements
    int age;
    string name;
    double weight;
    tie(age, name, weight) = person;
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "Weight: " << weight << endl;


    cout << "====================== " << endl;

    // using structured bindings (C++17 feature, but shown here for completeness)

    double d;
    string str;
    int ij;
    tie(ij  , str, d) = func();

    cout << "Elements of returned tuple are " << d << ", " << i << R"(, ")" << str <<   R"(")" << endl;


    return 0;
}