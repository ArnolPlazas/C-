#include <iostream>  // directiva: incluir bibliotecas externas al programa
using namespace std; //  Usar espacios de nombres std: evitar conflitos de nombres creando espacios virtuales

int main()
{                                    // Funcion principal, punto de entrada de ejecución
    cout << "Hello world!!" << endl; // console out: mostrar en consola en este caso "Hello World!!"

    // si se omite la declaracion del espacio de nombre se debe especificar en cada funcion el espacio de nombre
    // std::cout <<"Hello world!!"<< std::endl;

    return 0;
}