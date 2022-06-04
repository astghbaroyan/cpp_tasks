#include <iostream>
#include <iomanip>

double factorial(int x)
{
    int temp = x;
    double result = 1;
    while(x)
    {
        result *= x;
        x--;
    }
    result  = result / (temp + 1);
    return result;
}

int main()

{
    int n = 10; 
    double sum = 0;
    while(n)
    {
        sum +=factorial(n);
        n--;
    }
    std::cout<<std::fixed;
    std::cout<<std::setprecision(5);
    std::cout<<sum;
}