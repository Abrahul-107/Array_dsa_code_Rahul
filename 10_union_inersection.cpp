#include <bits/stdc++.h>
using namespace std;
#define max 100

void unionn(int *arr, int *arr2, int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] < arr2[j])
        {
            cout << arr[i++] << " ";
        }
        else if (arr2[j] < arr[i])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while (i < n1)
        cout << arr[i++] << " ";

    while (j < n2)
        cout << arr2[j++] << " ";
}

void intersection(int *arr, int *arr2, int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i] << " ";
        i++;j++;
       
    }


}
}

int main()
{
    int arr[max], arr2[max], i, n1, n2;
    cout << "Enter your araray size " << endl;
    cin >> n1;
    cout << "Enter your  1st array elements" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your araray size " << endl;
    cin >> n2;
    cout << "Enter your 2nd array elements" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    intersection(arr,arr2,n1,n2);

    return 0;
}