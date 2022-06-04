#include <iostream>
 
int main()	 
{
 const unsigned int n=1000;
 int a[n-1];
 int b[n/2-1];
 int c;
 std::cin >> c;
 for(int i=0; i<c; i++){
  std::cin >> a[i];
 }
 for(int i=0; i<c/2; i++){
  b[i]=a[i]+a[c-i-1];
  std::cout << b[i] << " ";
   }
}