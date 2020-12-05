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
        int N;
        cin >> N;

        int arr[N];
        // int size = N;
        
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        
        int fuel = arr[0], distance = 0, index = 0;
        arr[0] = 0;
        for (index = 1; index < N; index++)
        {
            if (fuel == 0)
                break;
            fuel--;
            distance++;

            fuel += arr[index];
        }
        distance += fuel;
        
        cout << distance << endl;
    }

    return 0;
}