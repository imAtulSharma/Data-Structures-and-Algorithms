#include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout << "Enter size of Array" << endl;
    int n;
    cin >> n;
    
    cout << "Enter values" << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int min = array[0], max = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
        else if (array[i] < min)
            min = array[i];
    }
    cout << "Minimum is " << min << " and Maximum is " << max << endl;

    return 0;
}