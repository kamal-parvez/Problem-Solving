#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int (*fun)(int , int);

    fun= &add;

    cout<<fun(200,300)<<endl;

    fun=&sub;

    cout<<fun(400,200)<<endl;

    return 0;
}
