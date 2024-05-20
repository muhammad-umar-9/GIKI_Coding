#include<iostream>
#include<stack>
using namespace std;
int main()
{

      stack <int> s;
      for(int i=0; i<5; i++)
      {
            s.push(i);
      }
      cout<<"Size of stack is: "<<s.size();

      cout<<"Top element is "<<s.top();

      for(int i=0; i<5; i++)
      {
            s.pop();
      }
      if(s.empty())
 {
 cout <<"Stack is empty."<<endl;
 }
 else
 {
 cout <<"Stack is Not empty."<<endl;
 }
 return 0;
}