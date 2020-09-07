// One day Jay, on getting his first salary, decides to distribute apples among the poverty-stricken persons.
// He gave each person 1kg of apples. People are coming in a queue and he makes sure that he gives every person 1 kg of apples only once.
// Every person is identified by a specific integer.

// Given the length of the queue N followed by an array of N integers, denoting the persons in that queue,
// find the minimum kg's of apples Jay will have to distribute.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    set<int> arr;
	    int temp;
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> temp;
	        arr.insert(temp);
	    }
	    
	    cout << arr.size() << endl;
	}
	return 0;
}