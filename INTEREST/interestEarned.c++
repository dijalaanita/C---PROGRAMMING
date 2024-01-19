#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double finalBalance, principal, rate, interest;
    int time;

    cout << "enter your principal: ";
    cin >> principal;

    cout << "enter your rate: ";
    cin >> rate;

    cout << "enter the time: ";
    cin >> time;

    finalBalance = principal * pow((1 + (rate/time)), time);
    interest = finalBalance - principal;
    
    cout << setw(15) << left << "Interest Rate:" <<setw(15) << right << rate * 100 <<setw(1) << right << "%" << endl;
    cout<<fixed << showpoint << setprecision(2);

    cout << setw(15) << left << "Times Compound:" <<setw(13) << right << time << endl;

    cout << setw(15) << left << "Principal:" <<setw(12) << right <<setw(12) << right <<"$" << principal << endl;

    cout << setw(15) << left << "Interest:" <<setw(12) << right << "$" <<setw(1) << right << interest << endl;

    cout << setw(15) << left << "Final Balance:" <<setw(12) << right << "$" <<setw(1) << right <<finalBalance << endl;

    }