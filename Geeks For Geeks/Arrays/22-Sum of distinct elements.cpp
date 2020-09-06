// You are given an array of size N.
// Find the sum of distinct elements in an array.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    
	    sort(A, A + N);
	    int sum = A[0];
	    
	    int for_check = A[0];
	    for(int i = 1; i < N; i++)
	    {
	        if(for_check != A[i])
	        {
	            sum += A[i];
	            for_check = A[i];
	        }
	    }
	    cout << sum << "\n";
	}
	return 0;
}