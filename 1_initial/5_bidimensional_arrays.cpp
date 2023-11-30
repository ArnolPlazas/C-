#include <iostream>

using namespace std;

int main()
{
    int matrix[4][5] = {15, 25, 8, -7, 92, 77, 12, 11, 7, 44, 56, 59, 43, 78, 12, 43, 95, 12, 87, 33};

    cout << matrix[0][2] << endl; // acceder

    matrix[0][2] = 125; // sobreescribir

    cout << matrix[0][2] << endl;

    cout << "********************************" << endl;
    int userMatrix[3][3];

    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            cin >> userMatrix[row][column];
        }
    }

    cout << "Look at the values stored in the array: " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            cout << userMatrix[row][column];
        }
        cout << endl;
    }

    return 0;
}