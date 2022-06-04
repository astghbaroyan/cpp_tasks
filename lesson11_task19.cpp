#include <iostream>

void dig(int a, int b){
  float divv = a / b; 
  std::cout << divv;
}

void  mul (int a, int b){
  int mull =  a*b ;
  std::cout << mull; 
}

void sum(int a, int b){
  int summ = a + b ;
  std::cout << summ; 
}

void diff (int a, int b){
  int dif = a - b ; 
  std::cout << dif;
}

void div_rem (int a, int b){
  int div_remm = a % b ; 
  std::cout << div_remm;
}

int main() {
  int a, b;
  char o;
  std::cin >> a >> b >> o;
  int c = o;
  if(c == 47){
    dig(a, b);
  }else if(c == 42){
    mul(a ,b);
  } else if(c == 43){
    sum(a, b);
  } else if(c == 45){
    diff(a, b);
  } else{
    div_rem(a, b);
  }

}