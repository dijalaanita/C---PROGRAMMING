#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double salesTax = 6.5, totalPrice, taxPrice, initalPrice = 95.0, countyTax = 2.0, totalTax;

    totalTax = salesTax + countyTax;
    taxPrice = initalPrice * (totalTax/100);
    totalPrice = initalPrice + taxPrice;
    
    cout<<fixed << showpoint << setprecision(1);
    cout << "your purchase price is $" << initalPrice << endl;
    cout << "your total tax is " << totalTax << endl;
    cout << "your total price is $" << totalPrice << endl;

}