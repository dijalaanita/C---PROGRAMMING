#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double cost, double markup);
int main(void){
    double cost, markup;

    cout << "enter your wholesale cost: ";
    cin >> cost;

    cout << "enter your markup percentage(in decimals): ";
    cin >> markup;

    //cout << fixed << setprecision(2);
    cout << "with a wholesale cost of $" << fixed << setprecision(2) << cost << " and a markup percentage of "<< markup <<"% your retail price is $" << fixed << setprecision(2) << calculateRetail(cost, markup);
}

double calculateRetail (double cost, double markup){
    double retail = (cost * (markup/100)) + cost;
    return retail;
}