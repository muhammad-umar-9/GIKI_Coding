#include <iostream>

class A {
public:
    void show() {
        std::cout << "Function in A\n";
    }
};

class B : public A {
public:
    void show() {
        std::cout << "Function in B\n";
    }
};

class C : public B {
public:
    void show() {
        std::cout << "Function in C\n";
    }
};

int main()
 {
    C obj;
    obj.show();  // Calls C's show()
    A ob;
    ob.show();
    
    // To call B's show() or A's show(), we need to explicitly specify the class
    obj.B::show();  // Calls B's show()
    obj.A::show();  // Calls A's show()
    
    return 0;
}
