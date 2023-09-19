#include<iostream>
using namespace std;

/*The function doesn’t have to process or perform 
any operation at the time of calling and 
all operations are done at returning time.*/

int fun(int n)
{
    if(n>0)
    {
    fun(n-1);
    cout<<n<<" ";

    }
    return 0;

    
}

int main()
{
    fun(5);
    return 0;


}