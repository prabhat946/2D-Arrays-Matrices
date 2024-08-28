//Name:prabhat
//PRN:23070123040
//Aim:Implemention of 2D Arrays - Matrices to display the Matrices

#include<iostream>
using namespace std;

int main() {
    int i, j, r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int arr[r][c];  
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The matrix elements are: " << endl;
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}


/*Output:
Enter number of rows: 2
Enter number of columns: 2
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (2, 1): 3
Enter element at position (2, 2): 1
The matrix elements are: 
1 2 
3 1 
*/