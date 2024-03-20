#include <string>
#include <iostream>

class IntRange {
private:
    int first;
    int second;

public:
    IntRange(int f, int s);
    IntRange();
    IntRange(const IntRange& other);

    IntRange& operator=(const IntRange& other);
    IntRange& operator++();
    IntRange operator++(int);
    IntRange& operator--();
    IntRange operator--(int);

    int getFirst() const;
    void setFirst(int f);
    int getSecond() const;
    void setSecond(int s);

    void input();
    void display() const;
    operator std::string() const;
    bool rangeCheck(int num) const;

    void Read(IntRange& range);
    void init();
};

