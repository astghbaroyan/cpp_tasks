#include <iostream>
#include <limits.h>

int main() 
{
  const int n = 1000;
  int a, num;
  int max = INT_MIN;
  std::cin >> a;
  int arr1[n];
  int arr2[n];
  int index =-1;
  bool t = true;
  for (int i = 0; i < a; ++i){
    std::cin >> num;
    arr2[i] = num;
  }

  for(int i = 0; i < a ; ++i){
    if(arr2[i] < 0 ){
      if(arr2[i] > max){
      max = arr2[i];
      index = i;
      t= false;
      }
    }
  }
  if(t){
    std::cout << 0 << " " << index;
  } else{
    std::cout << max << " " << index;
  }
}