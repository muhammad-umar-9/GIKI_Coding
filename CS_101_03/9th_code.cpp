#include <iostream>

using namespace std;

int main()
 {
    int num_1, num_2;
    cout<<"Enter Size of Ist array"<<endl;
    cin>>num_1;
    int *array1 = new int[num_1];
    
    cout<<"Enter elements of array 1 "<<endl;
    for(int i =0; i<num_1; i++)
     {
        cin>>array1[i];
    }
    
    cout<<"Enter Size of 2nd array "<<endl;
    cin>>num_2;
    int *array2 = new int[num_2];  //here we use pointers
    
    cout<<"Enter elements of array 2 "<<endl;
    for(int j=0; j<num_2; j++) 
    {
        cin>>array2[j];
    }

    int i=0; 
    int j=0;
    
    int *s_u;
    int *s_i;
    s_u = new int[num_1 + num_2];
 
    s_i = new int[min(num_1, num_2)]; //here we use built in function min
    
    
    int u_size =0;
    int i_size =0;
    
    
    while(i<num_1 && j<num_2)
     {
      if(array1[i]<array2[j]) 
        {
            
            s_u[u_size++] = array1[i];
            i++;
        }
      else if(array1[i]> array2[j]) 
         {
            
            s_u[u_size++]=array2[j];
            j++;
        } 
      else 
        {
            s_u[u_size++]=array1[i];
            s_i[i_size++]=array1[i];
            i++;
            j++;
        }
    }
    while (i<num_1) 
    {
        s_u[u_size++]=array1[i];
        i++;
    }
    while(j<num_2) 
    {
        s_u[u_size++] = array2[j];
        j++;
    }
    
    cout << "Union Of Elements are: " << endl;
    for (int k=0; k<u_size; k++) 
    {
        cout<< s_u[k]<<" ";
    }
      cout<<"\n";
    
    // Output the size and elements of the sorted intersection array
    
    cout<<"Intersection Of Elements are : ";
    for (int k=0; k<i_size; k++) 
    {
        cout<<s_i[k]<<" ";
    }
    cout<<"\n";

    return 0;
}
