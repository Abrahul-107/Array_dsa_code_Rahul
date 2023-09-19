#include<iostream>
using namespace std;



//e^x = 1 + x/1! + x^2/2! + ..... + n



double taylor(int x ,int n)
{
    static double p = 1 , f = 1;
    double r;

    if(n==0)
    return 1;

    else
    {
        r = taylor(x,n-1);
        p = p * x;
        f = f * n;

        return r + p/f;
    }

}

int main()
{
    //cout<<taylor(1,10)<<endl;
    cout<<taylor(4,10)<<endl;

    return 0;


}