// Given a string S consisting only '0's and '1's,
// print the last index of the '1' present in it. 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    int pos = -1;
	    for(int i = 0; i < s.size(); i++)
	    {
	        if((s[i] - 48) == 1){
	            pos = i;
	        }
	    }
	    cout << pos << "\n";
	}
	return 0;
}