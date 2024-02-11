#include <iostream>

int main() {
  int i, j, a;
  const int n = 3; // Assuming the number of rows
  const int m = 4; // Assuming the number of columns
  int nm[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Element to search
  a = 7;

  // Using goto to simulate breaking out of nested loops
  for (i = 0; i != n; ++i) {
    for (j = 0; j != m; ++j) {
      if (nm[i][j] == a) {
        // Element found
        std::cout << "Element " << a << " found at position (" << i << ", " << j
                  << ")." << std::endl;
        goto found;
      }
    }
  }

  // If the loop completes without finding the element
  std::cout << "Element " << a << " not found in the matrix." << std::endl;
  goto end;

found:
  // Additional actions if needed for the "found" case
  std::cout << "Additional actions for the 'found' case." << std::endl;

end:
  // Additional cleanup or actions if needed
  std::cout << "End of the program." << std::endl;

  return 0;
}
