#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    a += b; // a=15

    // cout << "The new value of a is: " << a << endl;

    // cout << "********************************" << endl;

    int c = 5;
    int d = 5;
    int e = ++c; // incrementa y despues asigna e=6
    int f = d++; // asigna y despues incrementa f=5

    // cout << "The value of c is: " << c << endl;
    // cout << "The value of d is: " << d << endl;

    // cout << "The value of e is: " << e << endl;
    // cout << "The value of f is: " << f << endl;

    // identify if a number is prime
    int num;
    bool is_prime = true;
    cout << "please tell me your number: " << endl;
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << num << " is prime.";
    }
    else
    {
        cout << num << " is not prime.";
    }
}