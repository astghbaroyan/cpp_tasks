#include <iostream>

int main() 
{
  const int n=1000;
  char s[n];
  int N;
  std::cin >> N;
  for (int i=0; i < N; i++){
    std::cin >> s[i];
  }
  for(int i=0; i<N; i++){
    if (s[i]>='0' && s[i]<='9'){
      std::cout << s[i] << " ";
    }    
  }
  for(int i=0; i<N; i++){
    if (s[i]<'0' || s[i]>'9'){
      std::cout << s[i] << " ";
    } 
  }
}
