#include<iostream>
using namespace std;
class Parent
{

  public:

  void display()

  {

    cout <<"Parent";

  }

};
class Child:public Parent
{
  public:
  void display()
  {
    cout << "Child";
   }
~Child()
{
    cout<<"Child class Destructor called";
}
};
int main()
{
 Parent* p = new Child;
 p->display();
  delete p;

  return 0;

}