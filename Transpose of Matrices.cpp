//Name:prabhat
//PRN:23070123040
//Aim:Implemention of 2D Arrays - Matrices to Transpose of Matrices

#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3];


cout << "The Original matrix is:"<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        cout << A[i][j]<< " ";
    }
    cout << endl;
}
cout << endl;
cout << "The Tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        B[i][j] = A[j][i];
        cout << B[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}


/*Output:
The Original matrix is:
1 2 3 
4 5 6 
7 8 9 

The Tranpose of matrix is: 
1 4 7 
2 5 8 
3 6 9 */