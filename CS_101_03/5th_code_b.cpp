#include<iostream>
using namespace std;
int main()
{
      int number;
      cout<<"Enter Number to generate  Pattern ";
      cin>>number;
       for(int i=1; i<=number; i++) //for rows
      {                            //here we use nested for loop to print * Pattern
            for(int j=i; j<number; j++) //loop for creating space
            {
                  cout<<".";
            }
            for(int k=1; k<=i; k++) //for columns
            {
                  cout<<i;
            }
            cout<<"\n";   //After printing "1" ist row it will print another
                         // ""22" on 2nd line and so on
      }
      
      
      return 0;
     
}