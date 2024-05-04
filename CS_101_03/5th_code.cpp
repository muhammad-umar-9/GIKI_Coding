#include<iostream>
using namespace std;
int main()
{
      int number;
      cout<<"Enter Number to generate * Pattern ";
      cin>>number;
       for(int i=0; i<=number; i++)
      {                            //here we use nested for loop to print * Pattern
            for(int j=0; j<i; j++)
            {
                  cout<<"*";
            }
            cout<<"\n";   //After printing ist row it will print another
                         // * on 2nd line and so on
      }
      
      
      return 0;
     
}