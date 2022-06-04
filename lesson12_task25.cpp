#include <iostream>

int main() 
{
  const int n = 10;
  double a[n], b[n], c[n+n];
  int i = 0,j = 0;
  for(int i = 0; i < n ; ++i){
    std::cin >> a[i];
  }
  for(int i = 0; i < n ; ++i){
    std::cin >> b[i];
  }
  for(int k = 0; k < (n + n) ; ++k){
    if(i < n && j < n ){
      if(a[i] <= b[j]){
        c[k] = a[i++];
      } else{
        c[k] = b[j++];
      }
    } 
  }
  for(int l = 0; l < i + j ; ++l){
    std::cout << c[l] << " ";
  }
  for(int l = i; l < n; ++l){
        std::cout << a[l] << " ";
      }
      for(int l = j; l < n; ++l){
        std::cout << b[l] << " ";
      }
}