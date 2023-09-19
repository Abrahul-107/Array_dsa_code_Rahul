#include <bits/stdc++.h>
using namespace std;
#define maxx 100
int PalinArray(int a[], int n)
{
    int rev , temp, count = 0;
    for (int i = 0; i < n; i++)
    {
        temp = a[i],rev=0;
        while (a[i] != 0)
        {
            int rem = a[i] % 10;
            rev = (rev * 10) + rem;
            a[i] = a[i] / 10;
        }
        if (temp != rev)
        {
            return 0;
        }
    }
    return 1;
   
}

int main()
{
    int a[maxx], i, n;
    cout << "Enter your size" << endl;
    cin >> n;
    cout << "Enter your elements " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << PalinArray(a, n) << endl;
    return 0;
}
