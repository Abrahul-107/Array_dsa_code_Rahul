#include<iostream>
using namespace std;
void fun2(int x);

void fun1(int n)
{
    if(n>0)
   {
    cout<<n<<" ";
    fun2(n-1);

   } 

}

void fun2(int x)
{
   if(x>0)
   {
    cout<<x<<" ";
    fun1(x/2);

   } 

}

int main()
{
    fun1(20);

}