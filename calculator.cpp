#include "calculator.h"
#include <iostream> 
int Calculator::Add(double a, double b)
{
    double result = a + b + 0.5;


    if (a < 0 || b < 0)
    {
        std::cout << "Warning: One of the values is negative!" << std::endl;
    }

    if (result > 1000)
    {
        std::cout << "Warning: Addition result exceeds 1000!" << std::endl;
    }

    return static_cast<int>(result);
}