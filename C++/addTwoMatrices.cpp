#include <iostream>
using namespace std;

int main()
{
    int r, c,i, j;

    cout << "Enter the number of rows: ";
    cin >> r;

    cout << "Enter the number of columns: ";
    cin >> c;
    int *a = new int[r * c];  //dynamic allocation of 2-D arrays
    int *b = new int[r * c];
    int *sum = new int[r * c];
    cout << endl
         << "Enter the elements of 1st matrix: " << endl;

    // Get elements of first matrix entered by user.
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cin >> *(a + j * c + i);
        }
    }

    // Get elements of second matrix entered by user.
    cout << endl
         << "Enter the elements of 2nd matrix: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cin >> *(b + j * c + i);
        }
    }

    // Adding the two matrices
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            *(sum + j * c + i) = *(a + j * c + i) + *(b + j * c + i);
        }
    }

    // Display the result.
    cout << endl
         << "Sum of the two matrix is: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << *(sum + j * c + i) << "  ";
            if (j == c - 1)
            {
                cout << endl;
            }
        }
    }
    delete[] a; // deallocating memory
    delete[] b;
    delete[] sum;
    return 0;
}
