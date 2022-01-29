#include<iostream>
using namespace std;


int main()
{
    int ara[100][100];
    int edge,node;
    cin>>edge>>node;

    for(int i=1;i<=edge;i++)
    {
        int n1,n2,cost;
        cin>>n1>>n2>>cost;
        ara[n1][n2]=cost;
        ara[n2][n1]=cost;
    }
}
