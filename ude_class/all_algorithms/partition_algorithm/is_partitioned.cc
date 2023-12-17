// is_partitioned() example

#include <algorithm> // std::is_partitioned
#include <iostream>  // std::cout
#include <vector>    // std::vector

using namespace std;

bool IsOdd(int i) { return (i % 2) == 1; }

void print_vec(std::vector<int> &foo) {
  for (auto i : foo)
    std::cout << i << " ";
  std::cout << std::endl;
}

int main() {
  std::vector<int> foo{1, 2, 3, 4, 5, 6, 7, 8, 9};

  if (std::is_partitioned(foo.begin(), foo.end(), IsOdd))
    std::cout << "foo is partitioned.\n";
  else
    std::cout << "foo is not partitioned.\n";

  // partition vector:
  std::partition(foo.begin(), foo.end(), IsOdd);
  std::cout << "after calling partition: ";
  print_vec(foo);

  if (std::is_partitioned(foo.begin(), foo.end(), IsOdd)) {
    auto ppoint = std::partition_point(foo.begin(), foo.end(), IsOdd);
    std::cout << "the partition point is: "
              << "with value: " << *ppoint
              << " at index: " << distance(foo.begin(), ppoint) << std::endl;
  }

  else
    std::cout << "foo is not partitioned.\n";

  return 0;
}