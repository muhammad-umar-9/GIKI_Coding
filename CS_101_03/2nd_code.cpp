#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,x;
	cout<<"Enter number to get sequence"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
      
       int x=pow(2,i)-2; //we use power where base is 2 and exponent is "i"
       
        
        
		cout<<" "<<"  "<<x;
		
	}
}