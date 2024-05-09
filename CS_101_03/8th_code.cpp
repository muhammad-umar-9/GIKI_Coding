#include <iostream>
using namespace std;

int main() 
{
  int n;
  cout<<"plz enter size of the array";
  cin>>n;
  int arr[n];

  cout << "Enter elements of the array:";
  for(int i=0; i<n; i++) 
  {
    cin>>arr[i];
  }

  int sum=0; 
  for(int i =0; i< n; i++) 
  {
    sum = sum + arr[i];
    if(sum==0) 
    {
      cout<<"true"<<endl;
      return 0; 
    }
    for(int j=0; j<i; j++)
     {
      
      if (sum-arr[i]==arr[j]) 
      {
        cout<<"true"<<endl;
        return 0; 
      }
    }
  }
  cout<<"false"<<endl;

  return 0;
}
