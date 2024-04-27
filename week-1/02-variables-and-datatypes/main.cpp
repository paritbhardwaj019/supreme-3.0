#include <iostream>
using namespace std;

int main()
{
    // Variables - name of memory location of data
    // 1 byte - 8 bit

    // DATATYPE NAME = VALUE

    // Size allocation to different datatype

    // int - 4 byte

    // decalartion - garbage value if not initialize
    // definitation - value

    int marks = 65;

    float pi = 3.14;

    char letter = 'a';

    double weight = 55.666654;

    bool canDrive = true;
    bool isMale = 1;

    bool isFemale = false;
    bool isGirl = 0;

    cout << "INT: " << sizeof(marks) << endl;
    cout << "FLOAT: " << sizeof(pi) << endl;

    cout << "DOUBLE: " << sizeof(weight) << endl;
    cout << "BOOLEAN: " << sizeof(canDrive) << endl;

    // sizeof is used to see size of a datatype

    // unsigned - 0 - positive 0 - 2^32 - 1
    // signed - negative / positive - -2^31 to 2^31 - 1 

    return 0;
}