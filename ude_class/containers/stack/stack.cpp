#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> s) {
  cout << "the Stack is empty?:  " << boolalpha << s.empty() << endl;
  cout << "The stack has " << s.size() << " elements" << endl;
  cout << "The top element is " << s.top() << endl;
}

int main() {
  stack<int> s;

  s.push(42);
  s.push(7);
  s.push(22);
  s.push(13);
  print_stack(s);

  // insert a new element
  cout << "\nAdding element with value 2\n";
  s.push(2);
  print_stack(s);

  // remove the first element
  cout << "\nRemoving the first element\n";
  s.pop();
  print_stack(s);
}