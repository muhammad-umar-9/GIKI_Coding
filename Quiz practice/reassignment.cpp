#include<iostream>

using namespace std;

int main()
{
	int *ptr; //only declaring the pointer
	
	cout<<ptr<<"\n"; //some random adress of pointer
	
	int marks = 20;
	
	ptr=&marks; //re-assignment or update adress of pointer
	
	cout<<ptr<<"\n";
	
	return 0;
}