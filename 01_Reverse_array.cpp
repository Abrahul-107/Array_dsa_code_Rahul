#include <bits/stdc++.h>
using namespace std;
#define max 100

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
    int j =0;
    cout << "After your reversing your array " << endl;
    for (i = n - 1; i >= 0; i--)
    {
        rev[j++] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << rev[i] << " ";
    }

    return 0;
}