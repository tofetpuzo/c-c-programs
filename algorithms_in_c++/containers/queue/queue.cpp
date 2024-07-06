#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q) {
  cout << "Queue: " << (q.empty() ? "empty" : "not empty") << endl;
  cout << "The queue has " << q.size() << " elements" << endl;
  cout << "The first element is " << q.front() << endl;
  cout << "The last element is " << q.back() << endl;
}

int main() {
  queue<int> q;
  q.push(42);
  q.push(7);
  q.push(22);
  q.push(13);
  print_queue(q);

  // insert a new element
  cout << "\n Adding element with value 2\n";
  q.push(2);
  print_queue(q);

  // remove the first element
  cout << "\n Removing the first element\n";
  q.pop();
  print_queue(q);
}
