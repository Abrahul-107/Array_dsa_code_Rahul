#include <bits/stdc++.h>
using namespace std;
#define maxx 100

int sumZero(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = arr[i];
        if (sum == 0)
            return 1;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == 0)
                return 1;
        }
    }

    return 0;
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
    int ans = sumZero(arr, n);
    if (ans == 1)
    {
        cout << "SUBARRAY SUM 0 IS EXIST IN THIS ARRAY " << endl;
    }
    else
    {
        cout << "NOT EXISTS";
    }

    return 0;
}