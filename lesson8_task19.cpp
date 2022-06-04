#include <iostream>

int main() 
{
  const int size = 1000;
  int arr[size];
  int n,i;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
  std::cin >> arr[i];
  }
  bool swapped  = false;
  do {
    swapped = false;
    for(int i = 0; i < n - 1; i++) {
      if(arr[i] < arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        swapped = true;
      }
    }
  } while (swapped);

  for (int i = 0; i < n; i++) {
    std::cout << arr[i]<< " ";
  }
}