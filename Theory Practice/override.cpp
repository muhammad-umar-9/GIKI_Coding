#include <iostream>

class Base 
{
public:
    void show() {
        std::cout << "Base class show()" << std::endl;
    }
};

class Derived : public Base 
{
public:
    void show() 
    {
      Base::show();
        std::cout << "Derived class show()" << std::endl;
    }
};

int main() 
{
    Derived obj;
    obj.show();
    Base* basePtr = new Derived();
    basePtr->show(); // Calls Derived::show(), not Base::show()
    delete basePtr;
    return 0;
}
