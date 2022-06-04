#include <iostream>
#include <cmath>
#include <limits.h>

int main() 
{
  int n;
  std::cin >> n;
  int *arr = new int[n];
  int sum = INT_MIN;
  int sum1 = INT_MIN;
  int sum2 = INT_MAX;
  int sum3;
  int m = 0;

  for(int i = 0; i < n  ; ++i){
    std::cin >> arr[i];
  }

  for (int i = 0; i < n ; ++i){
    for(int j = i + 1 ; j < n ; ++j){
      sum = arr[i] + arr[j];
      if(sum < 0 && sum > sum1){
        sum1 = sum;
      }
      if(sum >= 0 && sum < sum2){
        sum2 = sum;
      }
    }
  }  

  if( -sum1 < sum2 && sum1!=INT_MIN){
    sum3 = sum1;
  } else{
    sum3 = sum2;
  }

  for (int i = 0; i < n ; ++i){
    for(int j = i + 1 ; j < n ; ++j){
      sum = arr[i] + arr[j];
      if(sum == sum3){
        std::cout << arr[i] << " " << arr[j];
        ++m;
        break;

      }
    }
    if(m == 1){
      break;
    }
  }  

  return 0;
}