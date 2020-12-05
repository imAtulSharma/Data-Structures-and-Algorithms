#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // freopen ("input.txt", "r", stdin);
	// freopen ("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        long long int xeven = a/2;
        long long int yeven = b/2;
        long long int xodd = (a % 2 == 0) ? a/2 : a/2 + 1;
        long long int yodd = (b % 2 == 0) ? b/2 : b/2 + 1;

        cout << (xeven*yeven) + (xodd*yodd) << endl;
    }
    
    return 0;
}