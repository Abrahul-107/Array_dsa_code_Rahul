#include <bits/stdc++.h>
using namespace std;
#define up 100

int triplet(int *arr,int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum==0)
            {
                return 1;
            }
            else if(sum>0)
            r--;
            else
            l++;

        }

    }
    return 0;

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

    cout << triplet(arr, n);

    return 0;
}