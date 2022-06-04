#include <iostream>

int main() 
{
  const int n=1000;
  int arr[n];
  int N;
  std::cin >> N;
  int i;
  for (i=0; i<N; ++i){
    std::cin >> arr[i];
  }
  while(i>0){
    std::cout << arr[i-1] << " ";
    i--;
  }
}