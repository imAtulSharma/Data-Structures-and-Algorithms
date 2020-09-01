#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int s[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> s[i];
	    }
	    
	    int min = abs(s[0] - s[1]);

	    for(int i = 0; i < N; i++)
	    {
	        for(int j = 0; j < N; j++)
	        {
	            if((abs(s[i] - s[j]) < min) && i != j){
	                min = abs(s[i] - s[j]);
	            }
	        }
	    }
	    cout << min << "\n";
	}
	return 0;
}