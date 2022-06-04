#include <iostream>
 
int main() 
{
  const int n=10;
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++) {
  std::cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
  std::cin >> b[i];
  }
 for (int i = 0; i < n; i++){
   bool s=true;
    for (int j = 0; j < n; j++){
     if(a[i]==b[j]){
       s=false;
       break;
      }
    }if(s){
   std ::cout << a[i] <<" ";
   }
  }
}