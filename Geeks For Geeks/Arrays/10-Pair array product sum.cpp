// Given a array a[] of non-negative integers. Count the number of pairs (i, j) in the array such that a[i] + a[j] < a[i]*a[j].
// (the pair (i, j) and (j, i) are considered same and i should not be equal to j)

#include <iostream>
using namespace std;

int main() {
	int t ; 
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
	    
	    int count = 0;
	    for(int i = 0; i < N; i ++)
	    {
	        for(int j = i; j < N; j++)
	        {
	            if(i != j && ((a[i] + a[j]) < (a[i] * a[j])))
	            {
	                count++;
	            }
	        }
	    }
	    cout << count << "\n";
	}
	return 0;
}