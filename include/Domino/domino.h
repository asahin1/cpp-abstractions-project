#ifndef _DOMINO_H
#define _DOMINO_H

#include <string>
#include <iostream>

class Domino
{
public:
    Domino();
    Domino(int left, int right);

    std::string toString();

    int getLeftDots();
    int getRightDots();

private:
    int leftDots;
    int rightDots;
};

std::ostream &operator<<(std::ostream &os, Domino dom);

#endif