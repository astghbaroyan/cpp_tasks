#include <iostream>
#include <limits.h>

int main()
{
  unsigned int N;
  std::cin >> N;
  int i ,t;
  int max = INT_MIN;
  int count=0;
  for (i=0; i<N; i++){
   std::cin >> t;
   if (t > max) {
     max = t;
     count=0;
   }if(max==t){
     count++;
     } 
  }
std::cout  << count << std::endl;
}