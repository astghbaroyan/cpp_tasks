#include <iostream>

int main() 
{
  const int size = 1000;
  int a[size];
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  for (int i = 1; i < n; i++) {  
    int key = a[i];  
    int j = i - 1;  
    while (j >= 0 && a[j] < key) {  
      a[j + 1] = a[j]; //shift right 
      j--;  
    }  
    a[j + 1] = key;
  }
  for (int k = 0; k < n; k++) {
    std::cout << a[k] << " ";
  }
  std::cout << std::endl;
}