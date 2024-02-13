#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double falling (int time);

int main(void){
    double g = 9.8;
    double d;
    int t;

    for(t=1;t<=10;t++){
        cout<<"for "<<t<<" seconds your falling distance is " << fixed << setprecision(1) << falling(t) <<" meters" << endl;;
    }
}

double falling(int time)
{
    double d;
    double g = 9.8;
    d = 0.5 * (g*pow(time,2));
    return d;
}