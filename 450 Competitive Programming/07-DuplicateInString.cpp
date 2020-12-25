#include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout << "Enter a string less than 30 characters: ";
    char str[30]; 
    cin >> str;

    int arr[26] = {0};
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] < 91)
            arr[str[i]-65]++;
            
        else if (str[i] >= 97 && str[i] < 123)
            arr[str[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c : %d\n", i+65, arr[i]);
        }
    }
    
    return 0;
}