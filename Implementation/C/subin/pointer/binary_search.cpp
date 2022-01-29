#include<iostream>
#include<stdlib.h>
using namespace std;

int cmp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}


int main()
{
    int n=10,key,i;
    int *res;
    int ara[]={3,30,60,90,100,40,150,200,8,300};

    while(cin>>key && key)
    {
        res=(int *)bsearch(&key,ara,n,sizeof(int),cmp);

        if(res!=NULL)
            cout<<"Item found"<<endl;
        else
            cout<<"Not Found"<<endl;

    }

    return 0;
}
