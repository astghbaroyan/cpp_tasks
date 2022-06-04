#include <iostream>

int main()
{
    int rows = 6;
    int cols = 5;
    int i, j, K;
    std::cin>>K;
    int** arr = new int*[rows];
    for( i = 0; i < rows; i++)
    {
         arr[i] = new int[cols];
    }
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            std::cin >> arr[i][j];
        }
    }
    for( i = 0; i < rows; i++)
    {
        std::cout<<std::endl;
        for(j = 0; j < cols; j++)
        {
            if(i + 1 == K)
            {
                continue;
            }
            std::cout<<arr[i][j]<<" ";
        }
    }
    for (i = 0; i < rows; ++i)
    {
        delete [] arr[i];
    }  
    delete [] arr;
}