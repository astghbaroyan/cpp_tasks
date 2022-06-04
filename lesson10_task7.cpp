#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  int *arr1 = new int[n];

  for(int i = 0; i < n  ; ++i){
    std::cin >> arr[i];
  }
  int l = 0;
  bool t = true;
  for (int i = 0; i < n ; ++i){
    for(int j = i + 1 ; j < n ; ++j){
      t = true;
      if(arr[i] ==arr[j]){
        for(int k = 0; k < n; ++k ){
          if(arr[i] == arr1[k]){
            t = false;
            break;
          }        
        }
        if(t){
          std::cout << arr[i] << " ";
          arr1[l++] = arr[i];
        }
        break;
      }
    }
  } 
}