
#include <iostream>
#include <string>

using namespace std; 
int main()
{
    int score = 0;
    cout << "Input score :";
    cin >> score;
    if (score >= 80)
    {
        cout << "A" << endl;
    }
    else if (score >= 75)
    {
        cout << "B+" << endl;
    }
    else if (score >= 70)
    {
        cout << "B" << endl;
    }
    else if (score >= 65)
    {
        cout << "C+" << endl;
    }
    else if (score >= 60)
    {
        cout << "C" << endl;
    }
    else if (score >= 55)
    {
        cout << "D+" << endl;
    }
    else if (score >= 50)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}