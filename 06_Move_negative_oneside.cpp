#include <bits/stdc++.h>
using namespace std;
#define max 100

void movenegative(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        
            if (arr[i] < 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
            
        
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
    cout << "Enter your array size you want " << endl;
    cin >> n;
    cout << "Enter your elements " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before move " << endl;
    display(arr, n);
    cout << "\nAfter move" << endl;
    movenegative(arr, n);
    display(arr, n);

    return 0;
}