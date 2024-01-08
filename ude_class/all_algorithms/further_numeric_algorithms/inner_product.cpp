
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void print_vector(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2{1, 3, 6, 10, 15};

    print_vector(vec1);

    auto result = inner_product(cbegin(vec1), cend(vec1), cbegin(vec2), 0);

    cout << "Inner product of vec1 and vec2 is: " << result << endl;
}