// Given an array, cyclically rotate an array by one.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int a[N];
	    for(int i = 0; i < N; i++)
	    {
	        if(i == N-1){
	            cin >> a[0];
	        } else{
	            cin >> a[i+1];
	        }
	    }
	    for(int i = 0; i < N; i++)
	    {
	        cout << a[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}