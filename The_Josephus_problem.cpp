#include <iostream>
#include <cmath>

//Գերիների խնդիր

int main()
{
    int m=1; 
    int max=1;
    int n,l,c;
    std::cout << "ներմուծել գերիների ընդհանուր թիվը ";
    std::cin >> n;
    do{
        max=max*2;
        ++m;
    }
    while(max<=n);
    --m;
    max=max/2;
    l=n-max;
    c=2*l+1;
    std::cout << "\nՈղջ է մնում " << c << " համարում կանգնած գերին։";
    return 0;
}