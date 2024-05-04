#include<iostream>
using namespace std;
int main()
{
      int number;
      char a;
      do
      {
      cout<<"Enter Number ";
      cin>>number;
            for(int i=0; i<=number; i++)
      {                             //here we use nested for loop to print * Pattern
            for(int j=0; j<i; j++)
            {
                  cout<<i;
            }
            cout<<"\n";  //After printing ist row it will print another
                         // * on 2nd line and so on
      }
      cout<<"If you want to generate another pattern then \n write Y or y";
      cin>>a;
      }
       while (a =='Y' || a=='y');
      
      return 0;
     
}