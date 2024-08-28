//Name:prabhat
//PRN:23070123040
//Aim:Implemention of 2D Arrays - Matrices to Add two Matrices

#include<iostream>
using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;
    
    cout << "Enter number of rows of first matrix: " ;
    cin >> r1;
    cout << "Enter number of columns of first matrix: ";
    cin >> c1; 
    cout << "Enter number of rows of second matrix: ";
    cin >> r2;
    cout << "Enter number of columns of second matrix: ";
    cin >> c2;
    
    if(r1 == r2 && c1 == c2) 
    {
        int a[r1][c1];
        int b[r2][c2];
        int c[r1][c1];
        
        cout << "Enter elements of the first matrix:" << endl;
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> a[i][j];
            }
        } 
        cout << "The matrix elements are: " << endl;
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                cout << a[i][j] << " ";
            }
            cout << endl; 
        }
        cout << "Enter elements of the second matrix:" << endl;
        for(i = 0; i < r2; i++) 
        {
            for(j = 0; j < c2; j++) 
            {
                cout << "Element at (" << i+1 << ", " << j+1 << "): ";
                cin >> b[i][j];
            }
        }       
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        } 
        cout << "The matrix elements are: " << endl;
        for(i = 0; i < r2; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                cout << b[i][j] << " ";
            }
        cout << endl; 
        }
        cout << "The resultant matrix after addition is:" << endl;
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    } 
    else {
        cout << "Number of rows or columns do not match for matrix addition." << endl;
    }  
    return 0;
}


/*Output:
Enter number of rows of first matrix: 2
Enter number of columns of first matrix: 2
Enter number of rows of second matrix: 2
Enter number of columns of second matrix: 2
Enter elements of the first matrix:
Element at (1, 1): 1
Element at (1, 2): 2
Element at (2, 1): 1
Element at (2, 2): 2
The matrix elements are: 
1 2 
1 2 
Enter elements of the second matrix:
Element at (1, 1): 2
Element at (1, 2): 2
Element at (2, 1): 1
Element at (2, 2): 1
The matrix elements are: 
2 2 
1 1 
The resultant matrix after addition is:
3 4 
2 3 
*/