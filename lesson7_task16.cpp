#include <iostream>

int main () 
{
    unsigned int N,k;
    std::cin>>N;
    int a[100];
    int b[100];
    for(k = 0; k < N; k++)
    {
        std::cin>>a[k];
        int i = 2;
        int count = 0;
        while(i < a[k]) 
        {
            bool prime = true;
            int j = 2;
            while(j <= i/2)
            {
                if (i % j == 0) 
                {
                    prime = false;
                    break;    
                }
                j++;
            }   
            if(prime)
            {
                count++;
            }
            i++;
        }
        b[k] = count;
    }
    for(k = 0; k < N; k++)
    {
        std::cout<<b[k]<<" ";
    }
}