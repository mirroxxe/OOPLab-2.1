#include "IntRange.h"
#include <iostream>

void Read(IntRange& range);

int main() {
    IntRange range(1, 10);

    std::cout << "Initial range: ";
    range.display();

    std::cout << "Enter a number to check if it's within the range: ";
    int num;
    std::cin >> num;
    if (range.rangeCheck(num))
        std::cout << num << " is within the range." << std::endl;
    else
        std::cout << num << " is not within the range." << std::endl;

    std::cout << "After incrementing (prefix): ";
    ++range;
    range.display();

    std::cout << "After incrementing (postfix): ";
    IntRange temp = range++;
    range.display();
    std::cout << "Postfix increment result: ";
    temp.display();

    std::cout << "After decrementing (prefix): ";
    --range;
    range.display();

    std::cout << "After decrementing (postfix): ";
    temp = range--;
    range.display();
    std::cout << "Postfix decrement result: ";
    temp.display();

    Read(range);

    return 0;
}

void Read(IntRange& range) {
    range.input();
}
