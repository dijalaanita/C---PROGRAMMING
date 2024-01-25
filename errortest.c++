#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    string months1, months2, months3;
    double rain1, rain2, rain3, rainAvg;

    cout << "month1: ";
    cin >> months1;

    cout << "rain1: ";
    cin >> rain1;

    cout<< "month2: ";
    cin >> months2;

    cout << "rain2: ";
    cin >> rain2;

    cout << "month3: ";
    cin >> months3;

    cout << "rain3: ";
    cin >> rain3;

    rainAvg = (rain1 + rain2 + rain3)/3;

    cout << fixed << setprecision(2);
    cout << " for month " << months1 << ", " << months2 << ", and " << months3 << " was " << rainAvg << " inches.";
}