#include <iostream>
using namespace std;

void printCounting()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }
}

bool isEligibleForVoting(int age)
{
    return age >= 18;
}

float calculateSimpleInterest(int principal, int rate, int time)
{
    return (principal * rate * time) / 100;
}

bool checkIfPrimeOrNot(int num)
{
    bool result = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            result = false;
        }
    }

    return result;
}

void printPrimetillHundred()
{
    for (int i = 1; i <= 100; i++)
    {
        if (checkIfPrimeOrNot(i))
        {
            cout << i << endl;
        }
    }
}

// TODO: SIP Calculator

int main()
{
    /*


    float interest = calculateSimpleInterest(10000, 10, 12);
    bool isEligible = isEligibleForVoting(15);

    cout << interest << endl;
    cout << isEligible << endl;

    printCounting();

    int result = checkIfPrimeOrNot(6);
    cout << result << endl;


    printPrimetillHundred();

    */

    return 0;
}