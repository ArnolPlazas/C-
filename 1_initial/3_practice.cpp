#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Service " << endl;

    int meters_medium_quality{0};
    cout << "\n How many meters do you want to install with medium quality?" << endl;
    cin >> meters_medium_quality;

    int meters_high_quality{0};
    cout << "\n How many meters do you want to install with high quality?" << endl;
    cin >> meters_high_quality;

    const double price_medium_quality{35.5};
    const double price_high_quality{55.5};
    const double VAT{0.21};
    const int budget_expire{30};

    double installation_price = (price_medium_quality * meters_medium_quality) + (price_high_quality * meters_high_quality);

    cout << "****************************************************************************" << endl;
    cout << "Budget to Intall: " << endl;
    cout << "Amount of the meters of medium quality: " << meters_medium_quality << endl;
    cout << "Amount of the meters of high quality: " << meters_high_quality << endl;
    cout << "Price of medium quality: " << price_medium_quality << endl;
    cout << "Price of high quality: " << price_high_quality << endl;
    cout << "Price : " << endl;
    cout << "$" << installation_price << endl;
    cout << "VAT: $" << installation_price * VAT << endl;
    cout << "****************************************************************************" << endl;
    cout << "Total: $" << (installation_price * VAT) + installation_price << endl;
    cout << "This budget is valid for just " << budget_expire << " days." << endl;
}