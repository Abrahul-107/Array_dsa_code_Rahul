#include <bits/stdc++.h>
using namespace std;
#define max 100

void two_sum(int *arr, int n, int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("%d\t%d",i,j);
                break;
               
            }
        }
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