#include<iostream>
using namespace std;

int main()
{
	int x=10;
	float y=5;
	
	//Create a pointer that can store adress of x;
	//As X is an integer variable , so we need a pointer
	//that can store adress of integer type
	
	int * ptr = &x;
	cout<<"Adress stored inside pointer: "<<ptr<<endl;
	cout<<"Value present at the adress store in pointer: "<<*ptr<<endl<<"\n";
	
	//Create a pointer that can store adress of y;
	//As Y is an float variable , so we need to store
	//in a float pointer
	
	float * ptrf=&y;
	cout<<"Adress stored inside pointer: "<<ptrf<<endl;
	cout<<"Value present at the adress store in pointer: "<<*ptrf<<endl<<"\n";
	
	cout<<"-------------------"<<endl<<"\n";
	
	x=20;
	//the bucket x updated the value from 10 to 20
	//but pointer is still pointing the same bucket
	//Now if we dereference ptr , we will get 23
	
	cout<<"New updated value of x: "<< x <<endl;
	cout<<"Pointer still pointing to same memory which has 20 instead of 10:  "<<*ptr<<endl;
	cout<<"Adress is same: "<<ptr<<endl<<"\n";

    //updating x with pointer
    
	*ptr=30;
	cout<<"New value of X: "<< x <<endl;
	cout<<"New value pointed by ptr: "<< *ptr <<endl<<"\n";
	
	int value_at_x = *ptr;
	cout<<value_at_x<<endl;
	
	
	return 0;
	
	
	
}