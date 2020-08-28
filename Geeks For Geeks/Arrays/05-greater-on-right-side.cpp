// You are given an array A of size N. Replace every element with the next greatest element (greatest element on its right side) in the array.
// Also, since there is no element next to the last element, replace it with -1.

#include <iostream>
using namespace std;

int find_max_to_the_right_side(int arr[], int i, int N)
{
    int max = arr[i];    
    for(int j = i; j < N; j++)
    {
        if(max < arr[j]){
            max = arr[j];
        }
    }
    return max;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    for(int i = 0; i < N; i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i = 0; i < N; i++)
	    {
	        arr[i] = find_max_to_the_right_side(arr, i+1, N);
	        
	        if(i != N-1){
	            cout << arr[i] << " ";
	        } else{
	            cout << -1;
	        }
	    }
	    cout << "\n";
	}
	return 0;
}