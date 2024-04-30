#include <iostream>
using namespace std;

int main() {

    // For Loop
    // for(int count = 1; count <= 10; count++) {
    //     cout << "Parit !" << endl;
    // }

    // Couting from 1 to 5
    // for(int i = 1; i<= 10; i++) {
    //     cout << i << endl;
    // }

    // Couting from 51 to 69
    // for(int i = 51; i<= 69; i++) {
    //     cout << i << endl;
    // }

    // with break
    // for(int i = 1; i<= 5; i++) { // it will print till 2 but if we put cout before if it will be print till 3
    //     if(i == 3) {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // with continue
    // for(int i = 1; i<= 5; i++) { // it will skip iteration 3
    //     if(i == 3) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }



    // While Loop
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i = i + 1;
    }


    return 0;
}