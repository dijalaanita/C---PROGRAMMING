#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double eastCostPercent = 0.58;
    long double totalSales = 8600000, predictedSales;

    predictedSales = totalSales * eastCostPercent;
    cout<<fixed << showpoint << setprecision(2);
    cout << "the predicted sales generated from $8.6 million this year will be $"<< predictedSales;


}