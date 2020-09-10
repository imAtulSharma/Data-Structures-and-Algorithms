// Given an array A of size N, your task is to do some operations, i.e., search an element, insert an element, and delete an element by completing the functions.
// Also, all functions should return a boolean value.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}// } Driver Code Ends


/* Complete the function(s) below */

bool searchEle(int a[],int x)
{
    int n = 100;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) {
            return true;
        }
            
    }
    return false;
}
bool insertEle(int a[],int y,int yi)
{
    int n = 100;
    
    if (0 <= yi && yi <= n) {
        for (int i = n-1; yi < i; i--) 
        {
            a[i] = a[i-1];
        }
        a[yi] = y;
        return true;
    }
    
    return false;
}
bool deleteEle(int a[],int z)
{
    int flag = 0, n = 100;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == z) {
            for (int j = i; j < n; j++) 
            {
                a[j] = a[j+1];
            }
            flag = 1;
        }
    }
    
    if (flag == 1)
        return true;
    else
        return true;
}