#include <bits/stdc++.h>
using namespace std;
#define maxx 100

void minim_max_diff(int *arr, int n, int k)
{
    sort(arr, arr + n);
    int small = arr[0] + k;
    int large = arr[n - 1] - k;
    
    int mi, ma, ans = arr[n - 1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        mi = min(small, arr[i + 1] - k);
        ma = max(large, arr[i] + k);
        if (mi < 0)
            continue;
        ans = min(ans, ma - mi);
    }

    cout << ans;
}
int main()
{
    int i, n, arr[maxx], k;
    cout << "Enter your size " << endl;
    cin >> n;
    cout << "Enter your elements to your array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your k value" << endl;
    cin >> k;
    minim_max_diff(arr, n, k);

    return 0;
}