#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max], i, n;
    cout << "Enter your size you want " << endl;
    cin >> n;
    cout << "Enter your array elements to your array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int maxx = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
            maxx = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Your max is " << maxx << " Your min is " << min << endl;
    return 0;
}