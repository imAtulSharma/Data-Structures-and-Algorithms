#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        int ages[n], days1, days2, countrisk = 0, countnonrisk = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ages[i];
            if (ages[i] <= 9 || ages[i] >= 80)
                countrisk++;
        }
        countnonrisk = n - countrisk;

        days1 = countrisk/d;
        if (countrisk % d != 0)
            days1++;

        days2 = countnonrisk/d;
        if (countnonrisk % d != 0)
            days2++;

        cout << days1+days2 << endl;
    }

    return 0;
}