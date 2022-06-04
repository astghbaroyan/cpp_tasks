#include <iostream>
#include <climits>

int main() 
{
  int N;
  std::cin >> N;
  int M = INT_MIN;
  int m = INT_MAX;
  int tiv;
  for (int i = 0; i < N; ++i) {
    std::cin >> tiv;
    if (tiv > M) {
      M = tiv;
    }
    if (tiv < m) {
      m = tiv;
    }
  }
  std::cout  << M - m << std::endl;
}