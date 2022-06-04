#include <iostream>

int main() 
{
  const int n=1000;
  int a[n];
  unsigned int N;
  std::cin >> N;
  for (int i=0; i<N; ++i){
    std::cin >> a[i];
  }
  for (int i = 0; i < N; i++) {
   if (a[i] < 0) {
     std::cout << a[i] << " ";
     }
  }
  for (int i = 0; i < N; i++) {
   if (a[i] == 0) {
     std::cout << a[i] << " "; 
   }
  }
  for (int i = 0; i < N; i++) {
   if (a[i] > 0) {
     std::cout << a[i] << " ";
    }
  }
}