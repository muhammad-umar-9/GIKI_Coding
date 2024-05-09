#include <iostream>

using namespace std;

int main()
 {
  int number;
  cout<<"Enter the size of the square matrix";
  cin>>number;
  int matrix[15][15];

  cout<<"Enter the elements of the matrix:\n";
  for(int i =0; i<number; ++i)
   {
    for(int j= 0; j<number; ++j) 
    {
      cin>>matrix[i][j];
    }
  }

  // Check if the matrix is square
  if (number != sizeof(matrix[0]) / sizeof(matrix[0][0])) 
  {
    cout << "Not Symmetric" << endl;
    return 1; // Exit program if not square
  }

  // Check upper triangle excluding the diagonal
  for (int i=0; i<number; ++i) 
  {
    for (int j=i+1; j<number; ++j) 
    {
      if (matrix[i][j] != matrix[j][i]) 
      {
        cout << "Not Symmetric" << endl;
        return 1; // Exit program if not symmetric
      }
    }
  }
  cout<< "Symmetric" << endl;

  return 0;
}
