//Name:prabhat
//PRN:23070123040
//Aim:Implemention of 2D Arrays - Matrices to Multiply two Matrices

#include <iostream>
using namespace std;

int main() {
    int rA, cA, rB, cB, i, j;

    cout << "Enter the number of rows of the first matrix: ";
    cin >> rA;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> cA;

    cout << "Enter the number of rows of the second matrix: ";
    cin >> rB;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> cB;

    if (cA != rB) 
    {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 1;
    }

    int A[rA][cA], B[rB][cB], C[rA][cB] = {0};

    cout << "Enter elements of the first matrix:" << endl;
    for ( i = 0; i < rA; ++i) 
    {
        for ( j = 0; j < cA; ++j) 
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "The first matrix elements are: " << endl;
    for(i = 0; i < rA; i++) 
    {
        for(j = 0; j < cA; j++) 
        {
            cout << A[i][j] << " ";
        }
        cout << endl; 
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rB; ++i) 
    {
        for (int j = 0; j < cB; ++j) 
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    cout << "The first matrix elements are: " << endl;
    for(i = 0; i < rB; i++) 
    {
        for(j = 0; j < cB; j++) 
        {
            cout << B[i][j] << " ";
        }
        cout << endl; 
    }
    
    for (int i = 0; i < rA; ++i) {
        for (int j = 0; j < cB; ++j) 
        {
            for (int k = 0; k < cA; ++k) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < rA; ++i) 
    {
        for (int j = 0; j < cB; ++j) 
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


/*Output:
When Row of first matrix and Colums of second matrix are not same-
Enter the number of rows of the first matrix: 2
Enter the number of columns of the first matrix: 2
Enter the number of rows of the second matrix: 3
Enter the number of columns of the second matrix: 2
Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix.  

When Row of first matrix and Column of second matrix are same-
Enter the number of rows of the first matrix: 2
Enter the number of columns of the first matrix: 3
Enter the number of rows of the second matrix: 3
Enter the number of columns of the second matrix: 2
Enter elements of the first matrix:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
The first matrix elements are: 
1 2 3 
4 5 6 
Enter elements of the second matrix:
B[0][0]: 1
B[0][1]: 2
B[1][0]: 3
B[1][1]: 4
B[2][0]: 5
B[2][1]: 6
The first matrix elements are: 
1 2 
3 4 
5 6 
The resultant matrix is:
22 28 
49 64 
*/