#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max], i, n;
    cout << "Enter your araray size " << endl;
    cin >> n;
    cout << "Enter your array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = arr[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}