#include <iostream>
#include <iomanip>
using namespace std;

double hospitalCharge(int days, double rate, double hospService, double medCharge);
double hospitalCharge(double hospService, double medCharge);
double inputData(double data);
int main (void){
    char patient;
    int days;
    double rate, hospService, medCharge;

    cout << "please select the status of this patient" << endl;
    cout << "press a for inpatient or press b for outpatient";
    cin >> patient;
    
    switch (patient)
    {
    case 'a':
        cout << "Inpatient was selected!" << endl;
        cout << "how many day spent in hospital: " << endl;
        cin >> days;
        days = inputData(days);

        cout << "what is the daily rate: " << endl;
        cin >> rate;
        rate = inputData(rate);

        cout << "charge for hospital service: " << endl;
        cin >> hospService;
        hospService = inputData(hospService);

        cout << "hospital medication charges: "<<endl;
        cin >> medCharge;
        medCharge = inputData(medCharge);

        cout << fixed << showpoint << setprecision(2);
        cout << "your total charges at this hospital is $" << hospitalCharge(days,rate,hospService,medCharge);
        break;
    
    case 'b':

        cout << "Outpatient was selected!" << endl;
        cout << "charge for hospital service: " << endl;
        cin >> hospService;
        hospService = inputData(hospService);

        cout << "hospital medication charges: "<<endl;
        cin >> medCharge;
        medCharge = inputData(medCharge);

        cout << fixed << showpoint << setprecision(2);
        cout << "your total charges at this hospital is $" << hospitalCharge(hospService,medCharge);

    break;
    
    default:
    cout << "Wrong choice selected!";
        break;
    }
}

double hospitalCharge(int days, double rate, double hospService, double medCharge)
{
    return (days * rate + hospService + medCharge);
}

double hospitalCharge(double hospService, double medCharge)
{
    return (medCharge + hospService);
}

double inputData(double data)
{
    while (data < 0) {
    cout << "input cant be less than 0"<<endl;
    cout<<"enter the input value: ";
    cin>> data;   
    }

    return data;
}