// Given an array A[]  of n elements.
// Your task is to complete the Function num which returns an integer denoting the
// total number of times digit k appears in the whole array.

// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     int count = 0;
     for(int i = 0; i < n; i++)
     {
         for(int j = a[i]; j >= 1; j /= 10)
         {
             int rem = j % 10;
             if(rem == k)
             count++;
         }
     }
     return count;
}