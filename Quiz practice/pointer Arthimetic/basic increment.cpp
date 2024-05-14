#include<iostream>
using namespace std;

int main()
{
	int x;
	double y;
	int * ptr = &x;
	double * ptr1 = &y;
	cout<<"Size of x is : "<<sizeof(x)<<endl;
      cout<<ptr<<"  "<<ptr+1 <<endl<<"\n";
   
    cout<<"Size of y is : "<<sizeof(y)<<endl;
	cout<<ptr1<<"  "<< ptr+1 << " " << ptr+2 <<endl;
}