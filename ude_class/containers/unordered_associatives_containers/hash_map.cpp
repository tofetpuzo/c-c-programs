#include <algorithm>
#include <array>
#include <iostream>
#include <list>
#include <random>

using namespace std;

int main() {
  mt19937 mt;
  uniform_int_distribution<int> dist(1, 100);

  // the hash table is an array of linked lists
  std::array<list<int>, 10> buckets;

  // gerenate 150 random numbers and insert them into the hash table
  // if between 1 and 10 , put into buckets[0]
  // if between 11 and 20, put into buckets[1] etc
  for (int i = 0; i < 150; i++) {
    int num = dist(mt);
    buckets[(num - 1) / 10].push_back(num);
  }
  //   print out the contents of the bucketrs
  for (int i = 0; i < 10; i++) {
    auto bucket = buckets[i];
    cout << "bucket " << i << ": ";
    for (auto n : bucket) {
      cout << n << " ";
    }
    cout << endl;
  }
  int target{42};
  int idx = (target - 1) / 10;

  //   find the bucket that contains the number 42
  auto it = find(cbegin(buckets[idx]), cend(buckets[idx]), target);
  if (it != cend(buckets[idx])) {
    cout << "Found " << target << " in bucket " << idx << endl;
  } else {
    cout << "Did not find " << target << " in bucket " << idx << endl;
  }
}