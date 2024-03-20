#include "IntRange.h"
#include <iostream>

IntRange::IntRange(int f, int s) : first(f), second(s) {}
IntRange::IntRange() : first(0), second(0) {}
IntRange::IntRange(const IntRange& other) : first(other.first), second(other.second) {}

IntRange& IntRange::operator=(const IntRange& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
    }
    return *this;
}

IntRange& IntRange::operator++() {
    ++first;
    return *this;
}

IntRange IntRange::operator++(int) {
    IntRange temp(*this);
    ++first;
    return temp;
}

IntRange& IntRange::operator--() {
    --first;
    return *this;
}

IntRange IntRange::operator--(int) {
    IntRange temp(*this);
    --first;
    return temp;
}

int IntRange::getFirst() const {
    return first;
}

void IntRange::setFirst(int f) {
    first = f;
}

int IntRange::getSecond() const {
    return second;
}

void IntRange::setSecond(int s) {
    second = s;
}

void IntRange::input() {
    std::cout << "Enter first number: ";
    std::cin >> first;
    std::cout << "Enter second number: ";
    std::cin >> second;
}

void IntRange::display() const {
    std::cout << "[" << first << ", " << second << ")" << std::endl;
}

IntRange::operator std::string() const {
    return "[" + std::to_string(first) + ", " + std::to_string(second) + ")";
}

bool IntRange::rangeCheck(int num) const {
    return (num >= first && num < second);
}

void IntRange::Read(IntRange& range)
{
}

void IntRange::init()
{
}
