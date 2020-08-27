// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 
#include <iostream>

int main()
{
    int N, T, D;
    std::cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        std::cin >> N;
        std::cin >> D;

        int arr[N], arr2[N];
        for(int j = 0; j < N; j++)
        {
            std::cin >> arr[j];
        }

        for (int i = 0; i < N; i++)
        {
            if((i-D) >= 0){
                arr2[i-D] = arr[i];
            } else{
                arr2[i-D+N] = arr[i];
            }
        }

        for (int i = 0; i < N; i++)
        {
            std::cout << arr2[i] << " ";
        }
        std::cout << '\n';
    }
  
    return 0;
}