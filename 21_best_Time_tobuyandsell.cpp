#include <bits/stdc++.h>
using namespace std;
#define up 100

int max_stock(int *arr, int n)
{
    int maxm = 0;
    int minimum = arr[0];
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, arr[i]);
        int profit = arr[i] - minimum;
        maxm = max(maxm, profit);
    }
    return maxm;
}

int main()
{
    int arr[up], i, n;
    cout << "Enter your size you want " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << max_stock(arr, n);

    return 0;
}