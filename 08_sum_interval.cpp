#include<iostream>
using namespace std;

int sum(int x, int y)
{
    if(x==y)
    return y;

    return x + sum(x+1,y);

}

int main()
{
    int a,b;
    cout<<"Enter your lower and upper limit ";
    cin>>a;
    cin>>b;

    int add = sum(a,b);
    cout<<add;

    return 0;
    

    
}