#include<iostream>
using namespace std;

int main()
{
	int x=5;
	
	int * ptr = &x;
	
	// ptr = 7; //We can't do this because ptr only stores adress nothing else
	
	// *ptr = &y; // this wont work as we can't store in an int bucket
	
	cout<<"Adress of x is : "<< &x <<endl<<"\n";
	cout<<"Adress stored inside ptr: "<<ptr<<endl<<"\n";
      cout<<"Value stored inside ptr: "<<*ptr<<endl<<"\n";
	cout<<"Adress of ptr itself is : "<< &ptr; //it will print the adress of ptr bucket not the adress stored in ptr
	
}