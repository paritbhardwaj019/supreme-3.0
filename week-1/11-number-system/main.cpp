#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryByDivision(int n) {
    int binaryNumber = 0;
    int i = 0;

    while (n > 0) {
        int reminder = n % 2;
        binaryNumber = reminder * pow(10, i++) + binaryNumber;
        n = n / 2;
    }
    return binaryNumber;
}

int decimalToBinaryByBinary(int n) {
    int binaryNumber = 0;
    int i = 0;

    while (n > 0) {
        int bit = (n & 1);
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n >> 1;
    }
    return binaryNumber;
}

int binaryToDecimal(int n) {
    int decimal = 0;
    int i = 0;

    while (n)
    {
        int bit = n % 10;
        decimal = decimal + (pow(2, i++) * bit);
        n /= 10;
    }
    
    return decimal;
}


int main()
{

    // Decimal System
    // Base is 10
    // From 0-9

    // Binary System
    // Base is 2
    // 0,1 

    // int fiveInBinary =  decimalToBinaryByBinary(5);
    // cout << fiveInBinary << endl;

    int fiveInDecimal = binaryToDecimal(101);
    cout << fiveInDecimal << endl;

    return 0;
}