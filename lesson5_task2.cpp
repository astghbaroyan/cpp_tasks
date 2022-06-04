#include <iostream>
int main()
{
 int A,B;
 std::cin >> A;
 std::cin >> B;
 int i=A;
  while (i>=A && i<= B) {
     if (i % 2 == 0) {
     std::cout << i << " ";
    } 
   i += 1;
  }
}