#include <bits/stdc++.h>
using namespace std;
#define maxx 100

int sumPair(int *arr, int n)
{
    int sum, count = 0;
    cout << "Enter your sum" << endl;
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                count++;
        }
    }

    return count;
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
    int ans = sumPair(arr, n);
    cout << "pair is  " << ans;

    return 0;
}