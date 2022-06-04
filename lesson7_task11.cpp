#include <iostream>

int main() 
{
  const int n=1000;
  int arr[n];
  unsigned int N;
  std::cin >> N;
  int i;
  int count=0;
  for (i=0; i<N; ++i){
    std::cin >> arr[i];
  }
  while (arr[i-1]!=arr[0]){
    count++;
    --i;
  }
  std::cout << count << std::endl;
}