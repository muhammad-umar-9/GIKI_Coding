#include<iostream>
using namespace std;

class Superclass
{

public:
virtual void display()=0;

};

class Subclass:public Superclass
{
      
public:
void display()
{

cout<<“virtual function”<<endl;

}

};

int main()
{

      Superclass *super;

      Subclass sub;
      super = &sub;
      sub.display();
      super->display();

return 0;

}