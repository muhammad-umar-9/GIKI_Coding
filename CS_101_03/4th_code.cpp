#include <iostream>  //using libraries

using namespace std;

int factorial(int n)  //function for factorial
{
    if (n == 0 || n == 1) //we use or operator
	{
        return 1;
    }
	 else 
	{
        return n * factorial(n - 1);
    }
}

int main() 
{
    int N, r;
    
    cout <<"Enter your N ";
    cin>>N;                // take input from user
    
    cout<<"Enter r ";
    cin>>r;

    if (r > N)
	 {
        cout<<"Invalid input(r is never greater than N)";
    }
	 else 
	 {
        int x = factorial(N) / factorial(N - r); //we use factorial function
        
        cout<<"The permutation " << N << "P" << r << " is: " << x;
    }
    return 0;
}
