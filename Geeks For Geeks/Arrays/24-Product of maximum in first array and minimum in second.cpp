// Given two arrays of A and B respectively of sizes N1 and N2,
// the task is to calculate the product of maximum element of first array and minimum element of second array.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n1, n2;
	    cin >> n1;
	    
	    int a1[n1];
	    for(int i = 0; i < n1; i++)
	    {
	        cin >> a1[i];
	    }
	    
	    cin >> n2;
	    
	    int a2[n2];
	    for(int i = 0; i < n2; i++)
	    {
	        cin >> a2[i];
	    }
	    
	    int max = a1[0], min = a2[0];
	   
	    for(int i = 0; i < n1; i++)
	    {
	        if(max < a1[i]){
	            max = a1[i];
	        }
	    }
	    for(int j = 0; j < n2; j++)
	    {
	        if(min > a2[j]){
	            min = a2[j];
	        }
	    }
	    cout << max*min << endl;
	}
	return 0;
}