#include <iostream>
int main()
{
 int count=0;
 int A,B;
 std::cin >> A;
 std::cin >> B;
 int i=A;
  while (i>=A && i<= B) {
    if (i % 7 == 0) {
      count+=1;
      
    } 
   i += 1;
  }std::cout << count;
}