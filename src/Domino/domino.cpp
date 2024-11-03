#include "Domino/domino.h"

Domino::Domino()
{
    leftDots = 0;
    rightDots = 0;
}

Domino::Domino(int left, int right)
{
    leftDots = left;
    rightDots = right;
}

std::string Domino::toString()
{
    return "|" + std::to_string(leftDots) + "|" + std::to_string(rightDots) + "|";
}

int Domino::getLeftDots()
{
    return leftDots;
}

int Domino::getRightDots()
{
    return rightDots;
}

std::ostream &operator<<(std::ostream &os, Domino dom)
{
    return os << dom.toString();
}
