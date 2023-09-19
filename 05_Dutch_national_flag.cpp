#include <bits/stdc++.h>
using namespace std;
#define max 100


void dnf(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int arr[max], i, n;
    cout << "Enter your size " << endl;
    cin >> n;
    cout << "Enter your 0 1 and 2 to your array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "After sorting by DFN your array is " << endl;
    dnf(arr, n);

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}