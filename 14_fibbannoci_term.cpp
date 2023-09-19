#include<iostream>
using namespace std;

int fibb(int n)
{
    if(n<=1)
    return n;

    
    return fibb(n-2) + fibb(n-1);
    cout<<n<<endl;

}

int main()
{
    cout<<fibb(7);
    return 0;

}