#include<iostream>
using namespace std;

int pow(int b,int e)
{
    if (e==0 )
    return 1;

    return b * pow(b,e-1);

}

int main()
{
    int b,e;

    cout<<"Enter your base and exponent ";
    cin>>b;
    cin>>e;
    cout<<pow(b,e);

    return 0;



}