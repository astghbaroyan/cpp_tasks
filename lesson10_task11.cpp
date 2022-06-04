#include <iostream>

int main() 
{
  const int M = 6;
  int a[M][M], b[M][M], c[M][M];

  for( int i = 0; i < M * M ; ++i){
    std::cin >> *(*a + i) ;
  }

  for( int i = 0; i < M * M ; ++i){
    std::cin >> *(*b + i) ;
  }

  int count = 0; 

  for(int i = 0; i < M; ++i){
    for(int j = 0 ; j < M; ++j){
      c[i][j]= a[i][j] - b[i][j];
    }
  }

  for( int i = 0; i < M * M ; ++i){
    if(count == 6){
      count = 0;
      std::cout << std::endl;
    }
    std::cout << *(*c + i) << " ";
    ++count;
  }
}