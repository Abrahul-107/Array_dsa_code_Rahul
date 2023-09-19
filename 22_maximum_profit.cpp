#include <bits/stdc++.h>
using namespace std;
#define up 100

int max_profit(int *arr, int n)
{
    int profit = 0;

    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            profit += (arr[i] - arr[i-1]);

        }

    }
    return profit;
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

    cout << max_profit(arr, n);

    return 0;
}