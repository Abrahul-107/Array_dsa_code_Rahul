#include <bits/stdc++.h>
using namespace std;
#define maxx 100

int commonThree(int *arr, int *arr2, int *arr3, int n, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < n2 && k < n3)
    {
        if (arr[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if (arr[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }
}

int main()
{
    int arr[maxx], i, n, n2, n3, arr2[maxx], arr3[maxx];
    cout << "Enter your size" << endl;
    cin >> n;
    cout << "Enter your elements to 1st" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter your size for 2" << endl;
    cin >> n2;
    cout << "Enter your elements 2nd " << endl;
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Enter your size for 3" << endl;
    cin >> n3;
    cout << "Enter your elements to 3rd " << endl;
    for (i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }
     printf("Common Elements are ");
    commonThree(arr, arr2, arr3, n, n2, n3);

    return 0;
}