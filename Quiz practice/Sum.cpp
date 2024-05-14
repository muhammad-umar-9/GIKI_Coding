#include<iostream>

using namespace std;

int main()
{
	int x , y , result; //declare x, y and result , they have garbage value
      cout<<"Enter X and Y ";
	cin>> x >> y;
	int *ptrx = &x;  //&x fetches adress of x and store it in ptrx
	int *ptry = &y;  //&y fetches adress of y and store it in ptry
	int *ptr_result = &result;

     	*ptrx = 10;
     	*ptry = 20;
     	//*ptrx + *ptry = 30;
     	//*ptr_result = 30; //we store 30 on adress stored in *ptr_result
	
	
	*ptr_result= *ptrx + *ptry;
	
	cout<<result<<"  "<<*ptr_result;
}