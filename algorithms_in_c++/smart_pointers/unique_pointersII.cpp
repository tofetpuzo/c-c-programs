#include <memory>
#include <iostream>

using namespace std;    

// Data structure representing a point in screen

struct Point
{
    int x;
    int y;
};


int main(){
    // allocate a single int with value 42
    unique_ptr<int> p1{new int(42)};

    // allocate an array of 6 ints
    unique_ptr<int[]> p2{new int[6]};

    auto p3{make_unique<int>(42)};          // single int
    auto p4{make_unique<int[]>(6)};         // array of 6 ints

    cout << *p1 << endl;          // prints 42

    cout << p2[0] << endl;        // prints 0 (default initialized)

    unique_ptr<int> p5 = std::move(p3); // transfer ownership from p3 to p5

    p1 = nullptr;                   // release ownership of p1

    auto p{make_unique<Point>(Point{3, 6})}; // unique_ptr to Point}
    cout << "Point coordinates: (" << p->x << ", " << p->y << ")\n";
}