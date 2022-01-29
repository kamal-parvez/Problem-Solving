#include<iostream>
using namespace std;

void tof(int n,int src,int des,int aux){

    if(n==0)
        return;
    tof(n-1,src,aux,des);
    cout<<"Move "<<n<<"th disc from "<<src<<" to "<<des<<endl;
    tof(n-1,aux,des,src);
}

int main()
{
    int n;
    cin>>n;
    tof(n,1,3,2);
    return 0;
}
