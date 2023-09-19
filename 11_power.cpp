#include<iostream>
using namespace std;

int pow(int b,int e)
{
    if(e==0)
    return 1;

    if(e%2==0)
    return pow(b*b,e/2);

   
    return b*pow(b*b, (e-1)/2);

    
}

int main()
{
    cout<<pow(2,8);

}