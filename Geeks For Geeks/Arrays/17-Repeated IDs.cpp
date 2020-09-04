// Raghav is given a task to select at most 10 employees for a company project.
// Each employee is  represented by a single digit I.D. number which is unique for all the selected employees of the project.
// Raghav has a technical problem in his system which printed I.D. number multiple times.
// Help him to get rid of the repeated numbers.

#include <iostream>
using namespace std;

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
	        int flag = 1;
	        for(int j = 0; j < i; j++)
	        {
	            if(arr[j] == arr[i])
	            {
	                flag = 0;
	            }
	        }
	        if(flag == 1)
	        {
	            cout << arr[i] << " ";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}