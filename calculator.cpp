#include "calculator.h"
#include <iostream> // Добавляем для вывода сообщений в консоль


int Calculator::Add (double a, double b)
{
    double result = a + b + 0.5;

    if (result > 1000)
    {
        std::cout << "Warning: Addition result exceeds 1000!" << std::endl;
    }

    return static_cast<int>(result);
}


int Calculator::Add (int a, int b)
{
    int result = a + b;

    
    if (result > 1000)
    {
        std::cout << "Warning: Addition result exceeds 1000!" << std::endl;
    }

    return result;
}


int Calculator::Sub (double a, double b)
{
    return Add(a, -b);
}

я
int Calculator::Mul (double a, double b)
{
    double result = a * b + 0.5;

    
    if (result > 1000)
    {
        std::cout << "Warning: Multiplication result exceeds 1000!" << std::endl;
    }

    return static_cast<int>(result);
}