#include <iostream>
using namespace std;

int main()
{
    // int budget;
    // cout << "Enter your budget: " << endl;

    // cin >> budget;

    // if (budget > 2000000)
    // {
    //     cout << "You can buy SCORPIO-N" << endl;
    // }
    // else if (budget < 1000)
    // {
    //     cout << "Sorry :)" << endl;
    // }
    // else
    // {
    //     cout << "You can't buy SCORPIO-N" << endl;
    // }

    int height;
    cout << "Enter Height: " << endl;
    cin >> height;

    int weight;
    cout << "Enter Weight: " << endl;
    cin >> weight;

    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "good BMI !" << endl;
        }
        else
        {
            cout << "bad BMI !" << endl;
        }
    }
    else
    {
        cout << "bad height !" << endl;
    }

    return 0;
}