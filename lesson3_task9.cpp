#include <iostream>
int main()
{
 int a,A;
  std::cin>> a;
char symb1='a';
char nextsymb1=symb1+(a-1);
char symb2='A';
char nextsymb2=symb2+(a-1);
std::cout  << nextsymb1 << " "<< nextsymb2 << std::endl;
}