#include <iomanip>
#include <iostream>
using namespace std;
int scoreAdj (int& score);
int main(void)
{
    int score;
    cout << "enter your score: ";
    cin >> score;

    //cout << "the score was " << score << "% and is now, " << scoreAdj(score) << "%";
    scoreAdj(score);
    cout << "the score you enter is now " << score << "%";
}
int scoreAdj(int& score)
{
    if (score < 50 && (50-score)<= 5)
    {
        score = 50;
    }
    return score;
}