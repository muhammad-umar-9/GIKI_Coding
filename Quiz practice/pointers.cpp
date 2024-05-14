#include<iostream>

using namespace std;

int main()
{
	int arr[2]={5,9};
	
	int *ptr= &arr[0];
	
	cout<<ptr<<"  "<<*ptr<<endl<<"\n";
	
	cout<<*++ptr<<"  " <<ptr<<endl<<"\n"; //it will update the adress(here 4 bytes will be add) and print value at updates adress
	
	cout<<arr[0]<<" "<<arr[1]<<endl<<"\n"; //no effect will be on elements
	
	cout<<ptr<<" "<<*ptr<<endl; //here give us updated adress and value at that adress
	
}