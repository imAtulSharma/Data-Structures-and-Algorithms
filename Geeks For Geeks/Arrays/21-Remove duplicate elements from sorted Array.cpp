// Given a sorted array A of size N. The function remove_duplicate takes two arguments . The first argument is the sorted array A[ ] and
// the second argument is 'N' the size of the array and returns the size of the new converted array A[ ] with no duplicate element.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int [],int );

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
    int for_check = A[0];
    
    for(int i = 1; i < N;)
    {
        if(for_check == A[i]){
            for(int j = i; j < N - 1; j++)
            {
                A[j] = A[j + 1];
            }
            N--;
        } else{
            for_check = A[i];
            i++;
        }
    }
    return N;
}
