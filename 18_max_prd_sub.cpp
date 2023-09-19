#include <bits/stdc++.h>
using namespace std;
#define maxx 100

long long maxProductArray(int *arr, int n)
{

    long long ans = INT_MIN;
    long long prod = 1;

    for(int i=0;i<n;i++)
    {
        prod *= arr[i];
        ans = max(prod,ans);
        if(arr[i]==0)
        prod = 1;
    }
    prod = 1;

    // for(int i=n-1;i>=0;i--)
    // {
    //     prod *= arr[i];
    //     ans = max(prod,ans);
    //     if(arr[i]==0)
    //     prod = 1;
    // }
    return ans;
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

    cout << maxProductArray(arr, n) << endl;
    return 0;
}