#include <iostream>
#include <string>

class book_idx {
  std::string author;
  std::string title;

public:
  book_idx(const std::string &author, const std::string &title)
      : author(author), title(title) {}
  bool operator<(const book_idx &other) const {
    if (author == other.author)
      return title < other.title;
    return author < other.author;
  }
  friend std::ostream &operator<<(std::ostream &os, const book_idx &b) {
    os << "(" << b.author << ", " << b.title << ")";
    return os;
  }
};
