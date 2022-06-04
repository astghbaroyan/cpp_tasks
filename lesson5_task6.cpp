#include <iostream>

int main()
{
 int N,K;
 std::cin >> N >> K;
 int i=0,count=0;
  while (i<N){
    int t;
   std::cin>>t;
   if(t>=123){
     count+=1;
     i++;
     } else {
       i++;
     }
   }
 if (count==K){
   std::cout << "YES" << std::endl;
   } else {
    std::cout << "NO" << std::endl;
   }
}