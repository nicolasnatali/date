#include "Date.h"

#include <iostream>

int main() {
    Date d1;
    std::cout << "Before: " << d1 << std::endl;
    std::cout << "year: " << d1.getYear() << " month: " << d1.getMonth() << " day: " << d1.getDay() << std::endl;
    d1.setDate(2020, 2, 29);
    std::cout << "After: " << d1 << std::endl;
    std::cout << "year: " << d1.getYear() << " month: " << d1.getMonth() << " day: " << d1.getDay() << std::endl;
    std::cout << std::endl;

    Date d2{1970, 1, 1};
    std::cout << "Before: " << d2 << std::endl;
    std::cout << "year: " << d2.getYear() << " month: " << d2.getMonth() << " day: " << d2.getDay() << std::endl;
    d2.setDate(2022, 2, 29);
    std::cout << "After: " << d2 << std::endl;
    std::cout << "year: " << d2.getYear() << " month: " << d2.getMonth() << " day: " << d2.getDay() << std::endl;
    return 0;
}
