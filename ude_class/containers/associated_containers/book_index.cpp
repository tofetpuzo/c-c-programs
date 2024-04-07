#include "book_index.h"
#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

class book {
private:
  string publisher;
  string edition;
  int date;

public:
  book(string publisher, string edition, int date)
      : publisher(publisher), edition(edition), date(date) {}
  friend ostream &operator<<(ostream &os, const book &b) {
    os << "(" << b.publisher << ", " << b.edition << ", " << b.date << ")";
    return os;
  }
};

int main() {
  multimap<book_idx, book> library;

  book prog_princs("Addison Wesley", "1st", 2009);
  book_idx prog_princs_idx("Kernighan", "Programming in C");
  library.insert(make_pair(prog_princs_idx, prog_princs));

  book prog_princs2("Addison Wesley", "2nd", 2015);
  book_idx prog_princs_idx2("Kernighan", "Programming in C");
  library.insert(make_pair(prog_princs_idx2, prog_princs2));

  for (auto entry : library) {
    cout << entry.first << ": " << entry.second << endl;
  }
}