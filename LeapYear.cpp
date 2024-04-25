#include <iostream>

bool isLeapYear(int year) {
    // Leap years are divisible by 4
    if (year % 4 != 0) {
        return false;
    }
    // However, years divisible by 100 are not leap years, unless they are also divisible by 400
    else if (year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
