#include <iostream>
#include <iomanip>
using namespace std;

double getJudgeData(double, double, double, double, double);
double calcScore(double sc1, double sc2, double sc3, double sc4, double sc5);
int findHighest(double sc1, double sc2, double sc3, double sc4, double sc5);
int findLowest(double sc1, double sc2, double sc3, double sc4, double sc5);

int main(void)
{
    double j1, j2, j3, j4, j5;

    j1 = getJudgeData();
    j2 = getJudgeData();
    j3 = getJudgeData();
    j4 = getJudgeData();
    j5 = getJudgeData();

    cout << "the score is " << calcScore(j1,j2,j3,j4,j5);
}

double getJudgeData()
{
    double score;
    cout << "enter score" << endl;
    cin >> score;

    while (score < 0 || score > 10)
    {
        cout << "enter again must be between 0-10: ";
    }
}
double calcScore(double sc1, double sc2, double sc3, double sc4, double sc5)
{
    double highest, lowest;
    lowest = findLowest(sc1, sc2, sc3, sc4,sc5);
    highest = findHighest(sc1, sc2, sc3, sc4,sc5);

    double avg = (sc1 + sc2 + sc3 + sc4 + sc5 - lowest - highest)/3;
    return avg;
}
int findHighest(double sc1, double sc2, double sc3, double sc4, double sc5)
{
    double high = sc1;

    if(sc2 > high)
    {
        high = sc2;
    }
    
    if(sc3 > high)
    {
        high = sc3;
    }

    if(sc4 > high)
    {
        high = sc4;
    }

    if(sc5 > high)
    {
        high = sc5;
    }

    //return int(high);
    return static_cast<int>(high);
}
int findLowest(double sc1, double sc2, double sc3, double sc4, double sc5)
{
     double low = sc1;

    if(sc2 > low)
    {
        low = sc2;
    }
    
    if(sc3 > low)
    {
        low = sc3;
    }

    if(sc4 > low)
    {
        low = sc4;
    }

    if(sc5 > low)
    {
        low = sc5;
    }

    //return int(low);
        return static_cast<int>(low);
}