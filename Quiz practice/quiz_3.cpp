#include<iostream>
using namespace std;
void f(int *p , int *q)
{
      p = q;
      *p = 2;
}
int i=0 , j=0;
int main()
{
      f(&i , &j);
      cout<<i<<j;
      return 0;
}