
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void print_vector(vector<int> v) {
  for (auto i : v) {
    cout << i << ", ";
  }
  cout << endl;
}

int main(){
    vector<int> vec1 {1, 3, 6, 10, 15, 21};
    vector<int> vec2;

    print_vector(vec1);

    adjacent_difference(cbegin(vec1), cend(vec1), back_inserter(vec2));

    print_vector(vec2);

}