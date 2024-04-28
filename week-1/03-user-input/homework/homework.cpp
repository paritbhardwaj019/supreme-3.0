#include <iostream>
#include <limits>

// without cin.ignore()
/*
int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    return 0;
}
*/

// with cin.ignore()

/*
int main()
{
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // it stop ignoring characters after \n

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    return 0;
}
*/

// :: is called as scope resolution operator it is used to access members or names from class and namespaces.
#include <iostream>

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (std::cin.fail()) { // cin.fail() returns true if recent input operation fails like if we decided to take int value from input and user put char then it will be failed
        std::cout << "Invalid input! Please enter an integer." << std::endl;
        // Clear the error state of cin and ignore any remaining characters in the input buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        std::cout << "You entered: " << num << std::endl;
    }

    return 0;
}

