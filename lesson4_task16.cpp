#include <iostream>

int main() {
  char a='a';
  char b='b';
  std::cin >> a >> b;
  if(a>b){
    std::cout << "YES\n";
      }else if(a==b){
       std::cout << "EQUAL\n";
      }else {
        std::cout << "NO\n";
      }
}