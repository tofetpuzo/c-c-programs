#include <iostream>
#include <random>
#include <string>
#include <thread>

using namespace std;

int main() {
  int x{0};
  int vx{0};
  const int width{40};
  string blank_line(width, ' ');

  mt19937 mt; // create engine object - generates sequence of random numbers
  bernoulli_distribution bd(0.8);

  while (true) {
    if (bd(mt)) {
      vx = 1; // move right
      if (x == width) {
        vx = -1;
      } else {
        vx = -1; // move left
        if (x == 0) {
          vx = 1;
        }
      }
      x += vx;

      cout << "\r" << blank_line;

      string positon(x, ' '); // x spaces followed by a 'o'
      cout << "\r" << positon << '.' << flush;

      this_thread::sleep_for(100ms);
    }
  }
}