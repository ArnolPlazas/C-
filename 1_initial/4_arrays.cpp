#include <iostream>

using namespace std;

int main()
{
    int matrix[]{15, 20, 25};
    cout << matrix[1] << endl;
    cout << matrix[2] << endl;

    cout << "********************************" << endl;

    int edades[10]{15, 20, 25};
    cout << edades[7] << endl;

    cout << "********************************" << endl;

    const int personas{10};
    int edadesP[personas]{12, 54, 22};
    cout << edadesP[1] << endl;
    cout << edadesP[7] << endl;

    cin >> edadesP[7];
    edadesP[1] = 25; // sobreescribir

    cout << edadesP[1] << endl;
    cout << edadesP[7] << endl;
}