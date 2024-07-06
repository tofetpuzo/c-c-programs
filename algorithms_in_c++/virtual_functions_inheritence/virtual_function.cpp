// Normall when we call a member function of an object , the complier
// decides which function to call based on the type of the object.

// this is done using the static type of the object.

// the decision is made at compile time.
    // Circle circle;   // derived class object
    // Shape &rshape = circle;  // reference to base class, bound to a circle object
    // rshape.draw();  // calls base class function Shape::draw()

// this is known as static binding or early binding.

// Dynamic binding

// however , there are some cases where the complier does not make the decision
//instead it generates some code which is used to make the decision at runtime.

// the program will use this code to decide at run time which function to call.
// it will use the dynamic type of the object.
// this is known as dynamic binding or late binding.