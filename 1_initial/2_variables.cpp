#include <iostream>
using namespace std;

int main()
{
    string nombre = "Arnol";
    short edad{33};
    double salario;
    cout << "Introduce el salario del empleado: ";
    cin >> salario;
    cout << "Introduce la edad del empleado: ";
    cin >> edad;
    cout << "Datos del empleado: " << endl;
    cout << "Nombres: " << nombre << ". Edad: " << edad << ". Salario" << salario;
}