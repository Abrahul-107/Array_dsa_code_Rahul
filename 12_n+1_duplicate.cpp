#include <bits/stdc++.h>
using namespace std;
#define maxx 100

void duplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n > 1)
            cout << i << " ";
    }
}

int main()
{
    int arr[maxx], i, n;
    cout << "Enter your size" << endl;
    cin >> n;
    cout << "Enter your elements " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    duplicate(arr, n);

    return 0;
}