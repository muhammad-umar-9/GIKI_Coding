#include <iostream>
using namespace std;

class A{
      public:
      virtual void show() = 0;
};
class B: public A{
      public:
      void show()
      {
            cout<<"Display";
      }
};

int main() {
	// What should be here to achieve object slicing
      A *a;
      B b;
      a = &b;
      a->show();
      
	return 0;
}

// A. B *b = new B;
// 	  A* a  = b;

// B. B b;
// 	  A a = b;

// C. B b;
// 	  A *a = b;

// D. None of the above