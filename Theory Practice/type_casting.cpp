#include <iostream>
#include <iomanip> // for setprecision

using namespace std;

int main() 
{
    bool b = true;
    char c = b;
    short int si = c;
    int i = si;
    unsigned int ui = i;
    long l = ui;
    unsigned long ul = l;
    float f = ul;
    double d = f;
    long double ld = d;

    cout << boolalpha; // to print bool as true/false
    cout << "bool: " << b << endl;
    cout << "char: " << static_cast<int>(c) << endl; // print char as integer
    cout << "short int: " << si << endl;
    cout << "int: " << i << endl;
    cout << "unsigned int: " << ui << endl;
    cout << "long: " << l << endl;
    cout << "unsigned long: " << ul << endl;
    cout << "float: " << setprecision(6) << f << endl;
    cout << "double: " << setprecision(15) << d << endl;
    cout << "long double: " << setprecision(18) << ld << endl;

    return 0;
}
