#include <iostream>
#include <map>

using namespace std;

int main() {
  multimap<string, int> mmap;
  mmap.insert({"John", 45});
  mmap.insert({"Doe", 67});
  mmap.insert({"Jane", 67});
  mmap.insert({"Smith", 66});
  mmap.insert({"Harse", 77});
  mmap.insert({"Doe", 67});

  auto res = mmap.find("Doe");
  if (res != end(mmap)) {
    auto n_matches = mmap.count("Doe");

    // loop through the range of elements with key "Doe"
    for (int i = 0; i < n_matches; ++i) {

      if (res->second == 67) {
        cout << "Found an element with " << res->second << endl;
        break;
      }
      ++res;
    }
  }
}
