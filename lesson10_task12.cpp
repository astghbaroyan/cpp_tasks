#include <iostream>

int main() 
{
  const int N = 5 , M = 10;
  int a[N][M], b[M][N];

  for( int i = 0; i < N * M ; ++i){
    std::cin >> *(*a + i) ;
  }

  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M ; ++j){
      b[j][i] = a[i][j];
    }
  }

  int count = 0; 
  for( int i = 0; i < N * M ; ++i){
    if(count == 5){
      count = 0;
      std::cout << std::endl;
    }
    std::cout << *(*b + i) << " ";
    ++count;
  }
}