#include<iostream>
using namespace std;


/* After that call the recursive function performs nothing. 
The function has to process or perform any operation at the time of calling 
and it does nothing at returning time.*/


int fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);

    }
    return 0;

}

int main()
{

    fun(5);
    
    return 0;
   

}