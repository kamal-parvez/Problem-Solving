#include<iostream>
#include<stdlib.h>
using namespace std;

int cmp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}


int main()
{
    int n,i,key;
    int *ara,*res;

    cout<<"Enter the size of the Array : ";
    cin>>n;

    ara=(int *)calloc(sizeof(int),n);

    cout<<"Enter the numbers"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    qsort(ara,n,sizeof(int),cmp);

    cout<<"Sorted Array****"<<endl;

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    while(1)
    {
        cout<<"Enter the item(0 to exit) : ";
        cin>>key;
        if(key==0)break;

        res=(int *)bsearch(&key,ara,n,sizeof(int),cmp);

        if(res)
            cout<<"Item Found"<<endl;
        else
            cout<<"Not found"<<endl;
    }


    return 0;
}

