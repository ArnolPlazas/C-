#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> records(5); // con datos filos 0s

    vector<int> records2{25, 45, 60, 35};

    vector<char> letras;

    for (int i = 0; i < 5; i++)
    {
        // cout << records[i] << endl;
    }

    vector<double> base_salary(350, 2125.50); // guardar en las 350 posiciones el valor 2125.50

    int i = 0;
    while (i < base_salary.size())
    {
        // cout << base_salary[i] << endl;
        i++;
    }

    // method at()
    cout << records2.at(3) << endl; // valida los limites de los vectores
    records2.at(3) = 105;           //  Reasignar valores
    cout << records2.at(3) << endl;
    cout << "********************************" << endl;

    // methond push_back()
    records2.push_back(105); // agregar un elemento al final del vector

    for (int i = 0; i < records2.size(); i++)
    {
        cout << records2.at(i) << endl;
    }

    // exercise
    int element = 0;
    cout << "How many elements do you want to add to vector?: " << endl;
    cin >> element;
    vector<int> elements(element);
    for (int i = 0; i < element; i++)
    {
        cout << "Type the element of the vector # " << i + 1 << endl;
        cin >> elements[i];
    }
    cout << "Now I show you the elements stored in the vector: " << endl;
    for (int i = 0; i < element; i++)
    {
        cout << elements[i] << endl;
    }
}