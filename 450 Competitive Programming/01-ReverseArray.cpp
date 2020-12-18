#include <bits/stdc++.h>
using namespace std;

void swap(int array[], int i, int j)
{
    if (i != j)
    {
        array[i] = array[i] + array[j];
        array[j] = array[i] - array[j];
        array[i] = array[i] - array[j];
    }
}

int main ()
{
    int n;
    cout << "Enter size of the Array" << endl;
    cin >> n;

    int array[n];
    cout << "Enter values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i <= n-1-i; i++)
    {
        swap(array, i, n-1-i);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}