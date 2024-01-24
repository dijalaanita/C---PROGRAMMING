#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double mealCharge = 44.50, tax = 6.75, tip = 15, tiptotal, taxtotal1, totalbill, taxtotal;

    taxtotal = mealCharge * (tax/100);
    taxtotal1 = taxtotal + mealCharge;

    tiptotal = mealCharge * (tip/100);
    totalbill = mealCharge + tiptotal;

    cout<<fixed << showpoint << setprecision(2);
    cout << "your meal costs $" << mealCharge << endl;
    cout << "your tax amount is " << tax << "%" << endl;
    cout << "the tip you gave is going to be " << tip << "% of you meal" << endl;
    cout << "your total bill is $" << totalbill;
    
}