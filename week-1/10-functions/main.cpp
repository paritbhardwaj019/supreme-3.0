#include <iostream>
using namespace std;

void printCouting(int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << i << endl;
    }
}

int sum(int a, int b);

int getMultiplication(int x, int y, int z)
{
    return x * y * z;
}

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << i * num << endl;
    }
}

char toUppercase(char ch)
{
    return ch - 'a' + 'A';
}

int main()
{
    // printCouting(10);
    // int total = getMultiplication(10, 20, 30);

    // cout << total << endl;

    printTable(19);
    char B = toUppercase('b');
    cout << B << endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}