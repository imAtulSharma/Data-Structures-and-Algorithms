#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    int arr[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    vector<int> newarr;
	    
	    for(int i = 0; i < N; i++)
	    {
	        int flag = 1;
	        for(int j = 0; j < newarr.size(); j++)
	        {
	            if(arr[i] == newarr[j])
	                flag = 0;
	        }
	        if(flag == 1)
	            newarr.push_back(arr[i]);
	    }
	    
	    int sum = 0;
	    for(int i = 0; i < newarr.size(); i++)
	    {
	            sum += newarr[i];
	    }
	    cout << sum << "\n";
	}
	return 0;
}