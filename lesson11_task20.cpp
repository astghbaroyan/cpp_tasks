#include <iostream>
#include <math.h> 

double t(double a, double b, double c){
  double p = (a + b + c)/2;
  double ners = p * (p - a) * (p - b) * (p - c); 
  double s = sqrt(ners);
  return s;
}

int main() 
{
  double a, b , c;
  std::cin >> a >> b >> c;
  double sphere = t(a, b, c);
  std::cout << sphere;
}