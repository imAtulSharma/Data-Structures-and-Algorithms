// Given an array of integers, sort the first half of the array in ascending order and second half in descending order.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    sort(a, a + n);
	    
	    sort(a + n/2, a + n, greater<int>());
	    
	    for(int i = 0; i < n; i++)
	    {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}