#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
short int num = 32767;
num = num + 1;
cout << num<< endl; // Displays 32767
//cout << num; // Displays -32768
}