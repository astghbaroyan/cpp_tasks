#include <iostream>
#include <climits>

int main() 
{
  int N;
  std::cin >> N;
  int max1 = INT_MIN;
  int max2 = INT_MIN;
  int max3 = INT_MIN;
  int t;
  if (N>=3){
  for (int i = 0; i < N; i++) {
    std::cin >> t;
    if (t > max3) {
      max1=max2;
      max2=max3;
      max3=t;
    } else if (t > max2) {
     max1=max2;
     max2=t;
    } else if(t > max1) {
     max1 = t;
    }
    }std::cout << max1 << " " << max2 << " " << max3 << std::endl;
  }
}
  