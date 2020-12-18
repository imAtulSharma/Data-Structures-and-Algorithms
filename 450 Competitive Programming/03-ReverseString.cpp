#include <bits/stdc++.h>
using namespace std;

void swap(char String[], int i, int j)
{
    if (i != j)
    {
        String[i] = (int) String[i] + String[j];
        String[j] = (int) String[i] - String[j];
        String[i] = (int) String[i] - String[j];
    }
}

int main()
{
    int n;
    
    char String[25];
    cout << "Enter String" << endl;
    cin >> String;
    
    for (n = 0; String[n] != '\0'; n++);
    
    for (int i = 0; i <= n-1-i; i++)
    {
        swap(String, i, n-1-i);
    }
    
    cout << String << endl;
    
    return 0;
}