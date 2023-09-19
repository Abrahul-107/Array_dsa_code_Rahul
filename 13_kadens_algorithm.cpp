#include <bits/stdc++.h>
using namespace std;
#define maxx 100

int  kadens(int *arr, int n)
{
    int max_sum =0;
    int cur_sum = 0;
   
    for(int i=0;i<n;i++)
    {
        cur_sum = cur_sum + arr[i];
        if(max_sum<cur_sum)
        max_sum = cur_sum;
        if(cur_sum<0)
        cur_sum = 0;

    }

    return max_sum;
    
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
    int ans = kadens(arr,n);
    cout<<"Max contagious sum is "<<ans;

    

    return 0;
}