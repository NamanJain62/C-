#include <iostream>
using namespace std;

int main() {
    int row=2, column=3;
   int a[row][column]={{1,2,3},{4,5,6}}, transpose[column][row] ,i, j;

   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
        
      }
      cout<<endl;
   }

   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
   {
    for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         
      }
      cout<<endl;

   }
   return 0;
}