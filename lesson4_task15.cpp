#include <iostream>

int main() 
{
  int x,y,z;
  std::cin >> x >> y >> z;
  if(x>y && x<z){
    std::cout << x;
    }else if(x<y && x>z) {
      std::cout << x;
      }
  if (y>x && y<z){
      std::cout << y;
    }else if (y<x && y>z){
       std::cout << y;
    }
  if(z>x && z<y){
      std::cout << z;
    }else if(z<x && z>y) {
      std::cout << z;
    }
}