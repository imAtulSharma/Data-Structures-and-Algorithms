// There are N competitors in an exam .Each competitor has his own skill value which is given by the array s=s1,s2,....sN where s1 is the skill of the first competitor,
// s2 is the skill of second competitor and so on..
// Two competitors are said to be tough competitors if their skill difference is least i.e. they are very close in their skill values.
// Given N and an array s as input,find the tough competitors among the N competitors and print the absolute of the difference of their skill values.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    int s[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> s[i];
	    }
	    
	    int min = abs(s[0] - s[1]);

	    for(int i = 0; i < N; i++)
	    {
	        for(int j = 0; j < N; j++)
	        {
	            if((abs(s[i] - s[j]) < min) && i != j){
	                min = abs(s[i] - s[j]);
	            }
	        }
	    }
	    cout << min << "\n";
	}
	return 0;
}