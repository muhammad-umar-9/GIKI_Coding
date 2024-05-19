#include <iostream>
#include <string>
usin namespace std;
class Person {
public:
    // Explicit constructor
    explicit Person(const string& name) : name(name) {}

    void display() const {
        cout << "Name: " << name << endl;
    }

private:
    string name;
};

int main() {
    Person p1("Alice"); // OK: Direct initialization
    p1.display();

    // Person p2 = "Bob"; // Error: Copy-initialization is not allowed because constructor is explicit
    // p2.display();

    return 0;
}
