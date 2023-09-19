#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max], i, n;
    cout << "Enter your araray size " << endl;
    cin >> n;
    cout << "Enter your array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
   for(i=0;i<n;i++)
   {
    for(int j =i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        cout<<arr[i];
    }
   }

    return 0;
}