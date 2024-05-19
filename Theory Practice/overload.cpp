#include <iostream>

class Parent {
public:
    void func() 
    {
        std::cout << "Parent::func()" << std::endl;
    }

    void func(int x)
     {
        std::cout << "Parent::func(int)" << std::endl;
    }
};

class Child : public Parent
 {
public:
    void func(double x)
     {
        std::cout << "Child::func(double)" << std::endl;
    }
};

int main() 
{
    Child child;

      // Calling functions
    child.func(42);       // Will call Parent::func(int)
    child.func(42.0);     // Will call Child::func(double)
    // child.func();      // Error: func with no parameters is not visible in Child

    return 0;
}
