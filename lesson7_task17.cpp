#include<iostream>

int main()     
{
 const int N=100;
 int arr[N];
 int n;
 std::cin >> n;
 for(int i = 0; i < n; i++){
   std::cin >> arr[i];
  }
  bool t = true;
  for(int i = 0; i < n; i++){
   for(int j = 0 ;  j < n  ; ++j){
      t = true;
      if(i==j){
       
      }
      else if(arr[i] == arr[j]){
        t= false;
        break;
      }
    }
    if(t){
      std::cout << arr[i] << " " << i;
    }
  }
}
  