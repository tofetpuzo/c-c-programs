#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

class book {
private:
  string title;
  string author;

public:
  book(string title, string author) : title(title), author(author) {}

  friend ostream &operator<<(ostream &os, const book &b) {
    os << "(" << b.title << " by " << b.author << ")";
    return os;
  }
};
int main() {
  multimap<string, book> library;

  //   add some books to the library
  book prog_princs("Programming Principles and Practice Using C++",
                   "Addison Wesley");
  library.insert({"Stroustrup, Bjarne", prog_princs});

  book prog_primer("C++ Primer", "Addison Wesley");
  library.insert({"Lippman, StanleyB.", prog_primer});

  book prog_tour("A tour of c++", "Addison Wesley");
  library.insert({"Stroustrup Bjarne", prog_tour});

  book prog_prog("The C++ programming language", "Addison Wesleyp");
  library.insert({"Stroustrup, Bjarne", prog_prog});

  for (auto entry : library) {
    cout << entry.first << ": " << entry.second << endl;
  }
}
