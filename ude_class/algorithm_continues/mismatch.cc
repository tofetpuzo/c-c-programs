// TODO: use the mistmatch algorithm to find the first element that is different

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> vec3{1, 2, 3, 4, 5, 6, 7, 8, 0};
  vector<int> vec4{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  auto elems = mismatch(cbegin(vec1), cend(vec1), cbegin(vec3), cend(vec3));
  if (elems.first != cend(vec1) && elems.second != cend(vec3)) {
    cout << "found mismatch at: " << distance(cbegin(vec1), elems.first)
         << endl;
    cout << "found mismatch element vec1: " << *elems.first
         << " vec3 has element: " << *elems.second << endl;
  } else {
    cout << "no mismatch" << endl;
  }
}