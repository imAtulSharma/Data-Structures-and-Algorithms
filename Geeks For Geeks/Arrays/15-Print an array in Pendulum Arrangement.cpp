// Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum.
//    The minimum element out of the list of integers, must come in center position of array.
//    If there are even elements, then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)
//    The next number (next to minimum) in the ascending order, goes to the right, the next to next number goes to the left of minimum number and it continues like a Pendulum.


#include <bits/stdc++.h>
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
	        cin >> a[i];
	    }
	    
	    int mid;
	    if(N % 2 == 0){
	        mid = (N-1)/2;
	    } else{
	        mid = N/2;
	    }
	    
	    sort(a, a + N);
	    
	    vector<int> arr;
	    
	    for(int i = 0; i < N; i++)
	    {
	        if(i % 2 == 0){
	           reverse(arr.begin(), arr.end() );
	           arr.push_back(a[i]);
	           reverse(arr.begin(), arr.end() );
	        } else{
	            arr.push_back(a[i]);
	        }
	    }
	    for(int i = 0; i < N; i++){
	        cout << arr[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}