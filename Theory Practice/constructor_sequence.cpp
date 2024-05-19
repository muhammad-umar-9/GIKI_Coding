#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called\n";
    }
    virtual ~Base() {
        std::cout << "Base destructor called\n";
    }
};

class Member {
public:
    Member() {
        std::cout << "Member constructor called\n";
    }
    ~Member() {
        std::cout << "Member destructor called\n";
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        std::cout << "Derived1 constructor called\n";
    }
    ~Derived1() {
        std::cout << "Derived1 destructor called\n";
    }
};

class Derived2 : public Base {
private:
    Member member; // Member object

public:
    Derived2() {
        std::cout << "Derived2 constructor called\n";
    }
    ~Derived2() {
        std::cout << "Derived2 destructor called\n";
    }
};

int main() {
    std::cout << "Creating Derived1 object:\n";
    Derived1 d1;
    std::cout << "\nCreating Derived2 object:\n";
    Derived2 d2;
    return 0;
}
