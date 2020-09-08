// Chunky gets happy by eating Melody.
// Given an array of N elements each element represent happiness chunky get by eating melody.
// Chunky knows why melody is so chocolaty but will only tell you once you tell him the Max happiness he can get by eating two adjacent melodies.

#include <iostream>
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
	    
	    int max = a[0] + a[1];
	    for(int i = 1; i < n-1; i++)
	    {
	        if (max < a[i] + a[i+1]) {
	           max = a[i] + a[i+1];
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}