#include <iostream>

int main() 
{
  int n;
  std::cin >> n;
  int count = 0;
  int *arr = new int[n];
  int *arr1 = new int[n];
  for(int i = 0; i < n  ; ++i){
   std::cin >> arr[i];
  }
  for(int i = 0; i < n; ++i){
    count = 0;
    for(int j = 0; j < n ; ++j){
      if(arr[i] == arr[j]){
        ++count;
      }
    }
    std::cout << count << " ";
  }
}