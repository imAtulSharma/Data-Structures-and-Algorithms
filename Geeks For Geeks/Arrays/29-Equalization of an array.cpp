// Given an array of integers, the task is to count minimum number of operations to equalize the array
// i.e., to make all array elements same. To equalize an array, we need to move values from higher numbers to smaller numbers.
// Number of operations is equal to number of movements.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int a[n], sum = 0, operation = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        sum += a[i];
	    }
	    
	    int avg = sum / n;
	    if (sum % n != 0){
	        cout << -1 << endl;
	    } else{
	        for(int i = 0; i < n; i++)
	        {
	            if (a[i] > avg) {
	                operation += a[i]-avg;
	            }
	        }
	        cout << operation << endl;
	    }
	}
	return 0;
}