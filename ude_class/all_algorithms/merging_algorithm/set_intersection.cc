// using the set_intersection algorithm

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "vec1: ";
  print(vec1);

  vector<int> vec2{1, 3, 5, 7, 9};

  cout << "vec2: ";
  print(vec2);

  vector<int> vec3;

  set_intersection(begin(vec1), end(vec1), begin(vec2), end(vec2),
                   back_inserter(vec3));

  set_union(begin(vec1), end(vec1), begin(vec2), end(vec2),
            back_inserter(vec3));

  cout << "vec3: ";

  for (auto i : vec3)
    cout << i << " ";
  cout << endl;
}