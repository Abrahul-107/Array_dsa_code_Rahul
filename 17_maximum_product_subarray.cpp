#include <bits/stdc++.h>
using namespace std;
#define maxx 100

int maxProductArray(int *arr, int n)
{

    int cur_prod, max_prod = arr[0];
    for (int i = 0; i < n; i++)
    {
        cur_prod = arr[i];
        for (int j = i + 1; j < n; j++)
        {

            cur_prod = arr[j] * cur_prod;
            max_prod = max(max_prod, cur_prod);
        }
    }

    return max_prod;
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