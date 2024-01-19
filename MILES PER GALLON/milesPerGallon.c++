#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
int gallons, miles;
double milesPerGallon;

cout << "what is the gallon number? ";
cin>>gallons;

cout << "enter the miles? ";
cin >> miles;

milesPerGallon = miles / gallons;

cout<<fixed << showpoint << setprecision(2);
cout << "you have " << milesPerGallon << " miles per gallon.";

/*input: 
number of gallons
number of miles

clac 
miles / gallon */
}