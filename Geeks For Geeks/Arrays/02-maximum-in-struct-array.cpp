// Given a struct array of type Height, having two elements feet and inches.
// Find the maximum height, where height is calculated sum of feet and inches after converting feet into inches.

 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int height;
    int max = (arr[0].feet)*12 + arr[0].inches;
    
    for(int i = 0; i < n; i++)
    {   
        height = (arr[i].feet)*12 + arr[i].inches;
        
        if(height > max){
            max = height;
        }
    }
    return max;
}