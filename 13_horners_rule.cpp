#include <iostream>
using namespace std;

double horner(int x, int n)
{
    static double s;
    if (n == 0)
        return s;

    s = 1 + (x * s / n);
    return horner(x, n - 1);
}

int main()
{
    cout << horner(2, 10);

    return 0;
}