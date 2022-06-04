#include <iostream>
int main()
{
 int i = 0;
 int sum=0;
 int x;
 while (x) {
   std::cin >> x ;
   i = i + 1;
   if (x==0) {
     break;
    }
    sum+=x;    
  }  
  std::cout << sum << std::endl;
}