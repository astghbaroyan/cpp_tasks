#include <iostream>

int main() 
{
 int x;
 std::cin >> x;
 if(x % 2==0 && x % 7==3){
      std::cout << "YES";
   }else std::cout << "NO" << std::endl;
}