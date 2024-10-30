/*
 * File: main.cpp
 * --------------
 * This program reads in a temperature in units of Celsius
 * from the user and displays the corresponding temperature
 * in units of Fahrenheit.
 */

#include <iostream>

/* Function prototypes */
double celsiusToFahrenheit(double c);

/* Main program*/

int main()
{
    double celsius{0.0};
    std::cout << "This program converts temperature from units of Celsius to Fahrenheit" << std::endl;
    std::cout << "Enter temperature (in C): ";
    std::cin >> celsius;
    std::cout << "Temperature in F: " << celsiusToFahrenheit(celsius) << std::endl;
    return 0;
}

/*
 * Function: celsiusToFahrenheit
 * Usage: double f = celsiusToFahrenheit(c);
 * -----------------------------------------
 * Converts the temperature from units of Celsius
 * to Fahrenheit and returns the number
 */

double celsiusToFahrenheit(double c)
{
    double f{0.0};
    f = (9.0 / 5.0) * c + 32.0;
    return f;
}