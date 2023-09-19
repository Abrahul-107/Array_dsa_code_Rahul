#include <bits/stdc++.h>
using namespace std;
#define max 100

int majority(int *arr, int n)
{

    if (n == 1)
        return arr[0];
    sort(arr, arr + n);
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] == arr[i])
            count++;
        else
        {
            if (count > n / 2)
                return arr[i - 1];
            count = 1;
        }
    }
    return 0;
}

int main()
{
    int arr[max], rev[max], i, n;
    cout << "Enter your size you want " << endl;
    cin >> n;
    cout << "Enter your elements to your array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << majority(arr, n);

    return 0;
}