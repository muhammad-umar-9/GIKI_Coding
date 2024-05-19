#include <iostream>

class Base {
protected:
    int value;

public:
    Base(int v) : value(v) {}

    virtual void print() const {
        std::cout << "Base value: " << value << std::endl;
    }

    virtual Base operator+(const Base& other) const {
        return Base(value + other.value);
    }
};

class Derived : public Base {
private:
    int extra;

public:
    Derived(int v, int e) : Base(v), extra(e) {}

    void print() const override {
        std::cout << "Derived value: " << value << ", Extra: " << extra << std::endl;
    }

    Derived operator+(const Derived& other) const {
        return Derived(value + other.value, extra + other.extra);
    }
};

int main() {
    Base b1(5);
    Base b2(3);

    Derived d1(2, 1);
    Derived d2(4, 2);

    Base result1 = b1 + b2;
    result1.print();

    Derived result2 = d1 + d2;
    result2.print();

    return 0;
}
