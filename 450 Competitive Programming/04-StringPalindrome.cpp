#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    char String[25];
    cout << "Enter String" << endl;
    cin >> String;

    for (n = 0; n < String[n] != '\0'; n++);

    for (int i = 0; i < n-1-i; i++)
    {
        if (String[i] != String[n-1-i])
        {
            cout << "No, String is not Palindrome." << endl;
            return 0;
        }
    }
    cout << "Yes, the String is Palindrome." << endl;

    return 0;
}