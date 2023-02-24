#pragma once
#include <string>
#include <sstream>
using namespace std;
class Money
{
    long first;
    unsigned int second;
public:

    void Display() const;
    void Read();
    bool Init(long x, int y);
    void GeneralDisplay();
    void subtraction();
    friend double friendSubtraction(long x, int y);
    static double staticSubtraction(long x, int y);

    void multiplication();
    void comparison();
    string toString() const;
};

