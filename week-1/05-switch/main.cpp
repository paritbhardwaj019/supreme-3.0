#include <iostream>
using namespace std;

int main() {

    int height;
    cout << "Enter your height: " << endl;

    cin >> height;

    switch(height) {
        case 5:
            cout << ":)" << endl;
            break;
        case 6:
            cout << "good :)" << endl;
            break;
        default:
            cout << ":(" << endl;
    }

    return 0;
}