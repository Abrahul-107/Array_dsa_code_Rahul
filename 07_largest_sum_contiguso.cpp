#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max], i, n;
    cout << "Enter your size you want " << endl;
    cin >> n;
    cout << "Enter your elements to array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_sum = 0, cur_sum = 0;
    for (i = 0; i < n; i++)
    {
        cur_sum = cur_sum + arr[i];
        if (cur_sum > max_sum)
        {
            max_sum = cur_sum;
        }
        if (cur_sum < 0)
        {
            cur_sum = 0;
        }
    }

    cout<<max_sum;

    return 0;
}