#include <iostream>

int main() 
{
  int n;
  std::cin >> n;
  int *arr = new int[n];
  int count1 = 0;
  int count2 = 0;

  for(int i = 0; i < n  ; ++i){
    std::cin >> arr[i];
  }

  bool t = true;
  for(int i = 0; i < n ; ++i){
    for(int j = i + 1 ; j < n ; ++j){
      if(arr[i] < arr[j] ){
        t = true;
        ++count2;
        break;
      } else {
        t = false;
        count2 = 0;
        break;
      }
    }
    if(count2 > count1){
      count1 = count2;
    }
  }
  std::cout << count1 + 1;;
}