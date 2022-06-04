#include <iostream>

bool oddNum(int num){
  bool isPrime=true;
  
	    for (int j = 2; j < num; j++) { 
        isPrime = true;
		    if (num % j == 0) {
          isPrime = false;
          return isPrime;
		    } 
	    }
	  
	
  return isPrime;
}

int main() {
  int num;
  std::cin >> num;
  bool odd = oddNum(num);

  if(odd && num != 1){
    std::cout << "YES";
  } else{
   std::cout << "NO";

  }
}