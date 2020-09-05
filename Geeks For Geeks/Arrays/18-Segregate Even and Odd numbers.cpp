// Given an array A[], write a program that segregates even and odd numbers.
// The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> odd, even;
	    for(int i = 0; i < n; i++)
	    {
	        int temp;
	        cin >> temp;
	        if(temp % 2 == 0){
	            even.push_back(temp);
	        } else{
	            odd.push_back(temp);
	        }
	    }
	    sort(odd.begin(), odd.end());
	    sort(even.begin(), even.end());
	    
	    for(int i = 0; i < odd.size(); i++)
	    {
	        even.push_back(odd[i]);
	    }
	    for(int i = 0; i < n; i++)
	    {
	        cout << even[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}