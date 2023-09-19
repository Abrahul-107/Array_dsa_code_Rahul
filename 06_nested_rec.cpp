#include<iostream>
using namespace std;

int fun(int x)
{
    if(x>100)
    {
        return x-10;

    }
    else
    {
        return fun(fun(x+11));

    }
}

int main()
{
    int r = fun(99);
    cout<<r<<" ";

    return 0;


}