#include <iostream>

using namespace std;

int main()
{
    int passCar[24][31][12]; // [hour][day][month]

    // on 15th may at 2:00 am
    passCar[2][14][4] = 4; // number of cars

    for (int h = 0; h < 24; h++)
    {
        for (int d = 0; d < 31; d++)
        {
            for (int m = 0; m < 12; m++)
            {
                passCar[h][d][m] = rand() % 1000; // generate radom numbers from 0 to 1000
            }
        }
    }

    cout << "the numeber of cars that passed on 15th may at 2:00 am are: " << passCar[2][14][4] << endl;
    cout << "the numeber of cars that passed on 29th november at 7:00 pm are: " << passCar[19][28][10] << endl;
}