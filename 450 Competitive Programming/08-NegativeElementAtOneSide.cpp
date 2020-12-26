#include <bits/stdc++.h>
using namespace std;

void insertInArray(int a[], int i, int j)
{
    int temp = a[j];
    for (; j > i; j--)
    {
        a[j] = a[j-1];
    }
    a[i] = temp;
}

int main ()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int i = 0;
    while (1)
    {
        if (arr[i] > 0)
        {
            static int j = i+1;

            if (arr[j] < 0)
            {
                insertInArray(arr, i, j);
                i++;
            }
            j++;

            if (j == n)
                break;
            
            continue;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;   

    return 0;
}