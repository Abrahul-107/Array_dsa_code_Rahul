#include <bits/stdc++.h>
using namespace std;
#define max 100

void merge(int *arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int i, j, k;
    int lf[max], rt[max];
    for (i = 0; i < n1; i++)
    {
        lf[i] = arr[l + i];
    }
    for (j = 0; j < n1; j++)
    {
        rt[j] = arr[m + 1 + j];
    }
    i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (lf[i] <= rt[j])
        {
            arr[k] = lf[i];
            i++;
        }
        else
        {
            arr[k] = rt[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k++] = lf[i++];
    }
    while (j < n2)
    {
        arr[k++] = rt[j++];
    }
}

void mergersort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergersort(arr, l, m);
        mergersort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

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

    // cout << "Your array before sorting " << endl;
    // display(arr, n);
    // cout << "\nYour array after sorting " << endl;
    mergersort(arr, 0, n - 1);
    int k;
    cout << "Enter your kth position " << endl;
    cin >> k;
    cout << "Your kth min position element is " << arr[k-1] << endl;

    return 0;
}