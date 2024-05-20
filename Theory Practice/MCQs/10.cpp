// Revisit 

#include <iostream>
using namespace std;

class Base 
{
      int _x;
public:
	Base(const Base & rhs) {  // copy constructor
		_x = rhs._x;
	}
};

int main()
{
	Base b1(2);
	Base b2 = b1;
  	return 0;
}

// A. Compile Error
// B. Run Time Error
// C. Compile Successfully