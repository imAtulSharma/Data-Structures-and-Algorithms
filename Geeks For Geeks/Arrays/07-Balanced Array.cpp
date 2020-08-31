#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int sum1 = 0;
	    for(int i = 0; i < N/2; i++)
	    {
	        sum1 += arr[i];
	    }
	    
	    int sum2 = 0;
	    for(int i = N/2; i < N; i++)
	    {
	        sum2 += arr[i];
	    }
	    
	    cout << abs(sum1 - sum2) << "\n";
	}
	return 0;
}