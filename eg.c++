#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
cout << "enetr int number: ";
cin >> num;
int evenOrOdd(num);
}

void evenOrOdd(int num)
{
int evenOdd = num % 2;
	if (evenOdd ==0 )
		cout << "the number is even"<<endl;
	else 
		cout <<"it is odd" << endl;

num = evenOdd + 5;
	cout<<num;
}