#include <iostream>
using namespace std;

class Animal {
public: 
    virtual void eat() = 0;
};

class Cat : public Animal {
public:
    void eat1() {
        cout << "Eating Non-veg" << endl;
    }
};

class Cow : public Animal {
public:
    void eat() {
        cout << "Eating Veg" << endl;
    }
};

int main() {
    Animal *a = new Cow();
    a->eat();
    return 0;
}