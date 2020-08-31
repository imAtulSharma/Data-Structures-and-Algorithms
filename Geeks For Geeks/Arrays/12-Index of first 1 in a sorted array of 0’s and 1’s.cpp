// Given a sorted array consisting 0’s and 1’s.
// The task is to find the index of first ‘1’ in the given array. 

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int flag = -1;
	    
	    int a[N];
	    int i;
	    
	    for(i = 0; i < N; i++)
	    {
	        cin >> a[i];
	    }
	    for(i = 0; i < N; i++)
	    {
	        if(a[i] == 1)
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1){
	        cout << i << "\n";
	    } else{
	        cout << flag << "\n";
	    }
	}
	return 0;
}