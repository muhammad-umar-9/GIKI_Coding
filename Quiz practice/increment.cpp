#include<iostream>
using namespace std;
int main()
{
     const int max =3;
      int arr[max] = {2 , 4 , 7};
      int *ptr = &arr[max -1];

      for(int i= max-1; i >= 0; i--)
      {
            cout<<"Adress of ["<< i <<"]"<<endl;
            cout<<&arr[i]<<endl;
            cout<<"value of ["<< i <<"]"<<endl;
            cout<<arr[i]<<endl;
            ptr--;

      }
      return 0;
}