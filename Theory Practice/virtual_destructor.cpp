#include <iostream>
class Base 
{
public:
    virtual ~Base() { std::cout << "Base Destructor\n"; }
};
class Derived : public Base 
{
public:
    ~Derived() { std::cout <<"Derived Destructor\n"; }
};

int main() 
{
    Base* obj = new Derived();
    delete obj;  // Correct behavior: Both Base and Derived destructors are called
    return 0;
}
