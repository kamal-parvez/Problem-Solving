#include<iostream>
using namespace std;


void insertion(int ara[],int i)
{
    if(ara[i]<=ara[i/2])
        return;

    if(ara[i]>ara[i/2])
        swap(ara[i],ara[i/2]);
    insertion(ara,i/2);
}

void print(int ara[],int i)
{
    if(i<=0)
        return;
    print(ara,i-1);
    cout<<ara[i]<<" ";
}

void del_swap(int ara[],int i,int j)
{
    if(i<2*j)
        return;
    if(i==2*j)
    {
        if(ara[j] < ara[2*j])
        {
                swap(ara[j],ara[i]);
        }
        return;
    }
    if(ara[j] >= ara[2*j] && ara[j] >= ara[2*j+1])
        return;

    else
    {
        if(ara[2*j]>=ara[2*j+1])
        {
            swap(ara[j],ara[2*j]);
           del_swap(ara,i,2*j);
        }
        else
        {
             swap(ara[j],ara[2*j+1]);
             del_swap(ara,i,2*j+1);
        }
    }

}

void deletion(int ara[],int i)
{
    if(i==0)
        cout<<"Empty Heap and Deletion not possible"<<endl;

    else if(i==1)
                i--;

    else if(i>1)
    {
        swap(ara[1],ara[i]);
        i--;
        del_swap(ara,i,1);
    }
}

int main()
{
    int ara[200],t,x,i=0;

    while(cin>>t && t!=0)
    {
        if(t==1)
        {
            i++;
            cin>>x;
            ara[i]=x;
            if(i>1)
                insertion(ara,i);
        }
        else if(t==2)
        {
            deletion(ara,i);
            i--;
        }
        else if(t==3)
        {
            if(i==0)
                cout<<"Empty Heap"<<endl;
            else
                print(ara,i);
                cout<<endl;
        }

    }
    return 0;
}
