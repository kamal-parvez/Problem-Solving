#include<iostream>
using namespace std;


void tof(int src,int des,int aux,int n)
{
    if(n==0)
        return;
    tof(src,aux,des,n-1);
    cout<<"move 1 No disc from "<<src<<" to "<<des<<endl;
    tof(aux,des,src,n-1);
}

int main()
{
    int n;
    cin>>n;
    tof(1,3,2,n);
    return 0;
}
