
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>

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
    vector<double> expected{0.1, 0.2, 0.3, 0.4, 0.5};
    vector<double> actual{0.09, 0.22, 0.27, 0.41, 0.52};

    auto max_diff = inner_product(
        cbegin(expected), cend(expected), cbegin(actual), 0.0,
        [](double a, double b)
        { return max(a, b); }, // reduce operation
        [](double l, double r)
        { return fabs(l - r); }); // transform operation

    cout << "Max difference between actual and expected is: " << max_diff << endl;
}