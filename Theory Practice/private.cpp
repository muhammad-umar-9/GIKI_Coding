#include<iostream>
using namespace std;

class Parent {
private:
    void privateMethod()
     {
        cout<<"call parent function"<<endl;
    }
public:
    void callPrivateMethod()
     {
        privateMethod();
    }
};

class Child : private Parent 
{
private:
    void privateMethod()
     {
        cout<<"call child function"<<endl;
    }
public:

    void callChildPrivateMethod() 
    {
        privateMethod();
    }

    void callParentMethod() 
    {
        callPrivateMethod();  // Accessing Parent's public method
    }
};

int main() 
{
    Child child;
    //child.callPrivateMethod();  // Error: callPrivateMethod is private in Child
    child.callChildPrivateMethod();  // Calls Child's privateMethod
    child.callParentMethod();  // Calls Parent's callPrivateMethod indirectly
    return 0;
}
