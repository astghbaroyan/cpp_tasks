#include <iostream>

int main() 
{
 int size;
 std::cin >> size;
 int* dynArr = new int[size];
 int count = 0;

 for (int i = 0; i < size; i++) {
   std::cin >> dynArr[i];
 }
 for(int i = 0; i < size; i++){
   if (dynArr[i] % 2 == 0){
     count++;
   }
  }
 std::cout << count;
 delete [] dynArr;
}