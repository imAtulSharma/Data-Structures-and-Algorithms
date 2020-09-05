// Given an array of N elements,
// find the minimum number of insertions to convert the given array into a co-prime array pair-wise.

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    
    while(a != b)
    {
        if(a > b){
            a -= b;
        } else{
            b -= a;
        }
    }
    return a;
}

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int count = 0;
	    
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    for(int i = 1; i < n; i++)
	    {
	        if(gcd(a[i], a[i-1]) != 1)
	        {
	            count++;
	        }
	    }
	    cout << count << "\n";
	}
	return 0;
}