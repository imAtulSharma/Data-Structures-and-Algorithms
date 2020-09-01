// Given an array containing equal number of positive and negative elements, arrange the array
// such that every positive element is followed by a negative element.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int a1[N/2], a2[N/2];
	    int a = 0, b = 0;
	    
	    for(int i = 0; i < N; i++)
	    {
	        int temp;
	        cin >> temp;
	        if(temp > 0){
	            a1[a] = temp;
	            a++;
	        } else{
	            a2[b] = temp;
	            b++;
	        }
	    }
	    for(int i = 0; i < N/2; i++)
	    {
	        cout << a1[i] << " " << a2[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}