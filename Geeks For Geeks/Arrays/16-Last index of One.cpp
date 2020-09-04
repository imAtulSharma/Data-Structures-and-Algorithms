// Last index of One

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