#include <iostream>

#include "Domino/domino.h"

int main()
{
    for (int i{0}; i <= 6; i++)
    {
        for (int j{i}; j <= 6; j++)
        {
            Domino piece(i, j);
            std::cout << piece << std::endl;
        }
    }
    return 0;
}