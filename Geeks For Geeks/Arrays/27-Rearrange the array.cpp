// Given an array of integers, task is to print the array in the order – smallest number, Largest number, 2nd smallest number,
// 2nd largest number, 3rd smallest number, 3rd largest number and so on..

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
	    for(int i = 0; i <= (n-1-i); i++)
	    {
	        if(i != n-1-i){
	            cout << a[i] << " " << a[n-1-i] << " ";
	        } else{
	            cout << a[i] << " "; 
	        }
	    }
	    cout << endl;
	}
	return 0;
}