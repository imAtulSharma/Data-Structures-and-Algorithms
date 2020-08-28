// Given a sorted array having 10 elements which contains 6 different numbers in which only 1 number is repeated five times.
// Your task is to find the duplicate number using two comparisons only.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int arr[10];
	    
	    for(int i = 0; i < 10; i++)
	    {
	        cin >> arr[i];
	    }
	    if(arr[5] == arr[6]){
	        cout << arr[5];
	    } else{
	        cout << arr[4];
	    }
	    cout << "\n";
	}
	return 0;
}