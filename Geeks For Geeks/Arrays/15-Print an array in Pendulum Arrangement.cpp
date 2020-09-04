// Print an array in Pendulum Arrangement

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