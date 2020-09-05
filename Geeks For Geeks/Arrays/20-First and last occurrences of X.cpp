// Given a sorted array with possibly duplicate elements,
// the task is to find indexes of first and last occurrences of an element x in the given array.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int x;
	    cin >> x;
	    
	    int first = -1, last;
	    
	    int a[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        
	        if(a[i] == x)
	        {
	            if(a[i-1] != x)
	            {
	                first = i;
	            }
    	        last = i;
	        }
	    }
	    if(first == -1){
	        cout << first << "\n";
	    } else{
	        cout << first << " " << last << "\n";
	    }
	}
	return 0;
}