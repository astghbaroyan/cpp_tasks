#include <iostream>

int main()
{
  const int n = 21;
  char word [n];
  int count = 0;
  std::cin >> word;
  char* arr = word;
  while(*arr != '\0'){
    count++;
    arr++;
  }
 std::cout << count << std::endl;
 return 0;
}
