# include <iostream>
# include<math.h> //using libraries

using namespace std;

bool Prime(int num)                //using boolean function
{
	for(int i=2; i<=sqrt(num); i++)       //using for loop
	{
		if(num%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a,b;
	cout<<"Enter Ist number"<<endl;         //takes lower limit from user
	cin>>a;
	
	cout<<"Enter 2nd number"<<endl;         //takes uper limit form user
	cin>>b;
	
	cout<<"Your prime numbers between "<< a << " and "<< b <<endl;
	
	for(int i=a; i<=b; i++)
	{
		if(Prime(i)==true)                 //checks for prime numbers
		{
			cout<<i<<endl;
		}
	}
	return 0;                              //program has ended successfully               
}
