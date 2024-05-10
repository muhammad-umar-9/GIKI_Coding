#include<iostream>
using namespace std;
int main()
 {
    int number = 5;

    int array[6] = {1 , 2 , 3 , 4 , 5 };

    cout<<"Following are pairs which sum equal to your given number"<<endl;

    for(int i = 0; i < 6; ++i)
     {                           //here we compare elements of array
        for(int j = i+1; j<6; ++j) 
        {
            if(array[i] + array[j] == number)  //to check condition
            {
                
                cout<<array[i]<<" "<< array[j] << "\n";
            }
        }
    }

    return 0;
}

