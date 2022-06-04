#include <iostream>

int binary(long num)
{
    long result = 0;
    long karg = 1;
    while(num)
    {
        result += (num % 2) * karg;
        num = num / 2;
        karg = karg * 10;
        
    }
    std::cout<< result;
}
int main()

{
    unsigned long num;
    std::cin>>num;
    binary(num);
}