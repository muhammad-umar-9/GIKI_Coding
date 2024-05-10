#include <iostream>

using namespace std;

int main()
 {
    int n1, n2;
    cout<<"Enter Size of Ist array"<<endl;
    cin>>n1;
    int *arr1 = new int[n1];
    
    cout<<"Enter elements of array 1 "<<endl;
   
    for(int i = 0; i < n1; i++)
     {
        cin >> arr1[i];
    }
    
    cout<<"Enter Size of 2nd array "<<endl;
    cin>>n2;
    int *arr2 = new int[n2];  //here we use pointers
    
    cout<<"Enter elements of array 2 "<<endl;
    for (int j = 0; j < n2; j++) 
    {
        cin >> arr2[j];
    }

    int i=0; 
    int j=0;
    
    
    int *s_u;
    int *s_i;
    s_u= new int[n1 + n2];
 
    s_i =new int[min(n1, n2)]; //here we use built in function min
    
    
    int u_size = 0;
    int i_size = 0;
    
    // Use a two-pointer approach to compute the sorted union and intersection
    while (i < n1 && j < n2)
     {
        if (arr1[i] < arr2[j]) 
        {
            
            s_u[u_size++] = arr1[i];
            i++;
        }
         else if (arr1[i]> arr2[j]) 
         {
            
            s_u[u_size++]=arr2[j];
            j++;
        } 
        else 
        {
            
            s_u[u_size++]=arr1[i];
            s_i[i_size++]=arr1[i];
            i++;
            j++;
        }
    }
    while (i<n1) 
    {
        s_u[u_size++]=arr1[i];
        i++;
    }
    
    
    while (j<n2) 
    {
        s_u[u_size++] = arr2[j];
        j++;
    }
    
    
    cout << "Union Of Elements are: " << endl;
    for (int k = 0; k < u_size; k++) 
    {
        cout<< s_u[k] << " ";
    }
    cout<<endl;
    
    // Output the size and elements of the sorted intersection array
    
    cout<<"Intersection Of Elements are : ";
    for (int k = 0; k < i_size; k++) 
    {
        cout << s_i[k] << " ";
    }
    cout << endl;
    

    
    return 0;
}
