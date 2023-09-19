#include <bits/stdc++.h>
using namespace std;
#define max 100
//

//ARRY WILL BE SORTED AFTER THAT IT GIVES THE NEW ARRAY
void two_sum(int *arr, int n, int x)
{
    sort(arr, arr + n);
    int l = 0;
    int r = n - 1;
    int a[2];
    while (l <= r)
    {
        int sum = arr[l] + arr[r];
        if (sum == x)
        {
           a[0] = arr[l];
           a[1] = arr[r];
           break;
        }
        else if (sum < x)
            l++;
        else
            r--;
    }
    for(int i=0;i<2;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[max], i, n;
    cout << "Enter your size you want " << endl;
    cin >> n;
    cout << "Enter your elements to your array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter your target number " << endl;
    cin >> target;
    two_sum(arr, n, target);

    return 0;
}