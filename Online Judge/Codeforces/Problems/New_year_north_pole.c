#include<stdio.h>
#include<string.h>

struct pole
{
    int d;
    char s[10];
};

int main()
{
    struct pole l[50];
    int n,i,j,k;
    scanf("%d",&n);
   //int n1=0,s1=0,w1=0,e1=0;
   int net=0;
    char so[10]="South";
    char no[10]="North";
    char we[10]="West";
    char ea[10]="East";

    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i].d);
        scanf("%s",l[i].s);
    }

int flag=0;
    if(strcmp(l[0].s,so)!=0 && strcmp(l[n-1].s,no)!=0)
    {
        printf("NO\n");
    }

    else
    {
        for(i=0;i<n;i++)
        {

            if(strcmp(l[i].s,so)==0)
            {
                net+=l[i].d;
            }
            else if(strcmp(l[i].s,no)==0)
            {
                net-=l[i].d;
            }

            if(net==0)
            {
                if(!(strcmp(l[i].s,so)==0))
                    flag=1;
                   // break;
            }
            if(net==20000)
            {
                if(!(strcmp(l[i].s,no)==0))
                    flag=1;
                   // break;
            }
           /* else if(strcmp(l[i].s,we)==0)
            {
                w1+=l[i].d;
            }
            else if(strcmp(l[i].s,ea)==0)
            {
                e1+=l[i].d;
            }*/
            if(strcmp(l[i].s,so)==0 && l[i].d==20000)
            {
                if(!(strcmp(l[i+1].s,no)==0))
                    flag=1;
                  //  break;
            }
            if(strcmp(l[i].s,no)==0 && l[i].d==20000)
            {
                if(!(strcmp(l[i+1].s,so)==0))
                    flag=1;
                    //break;
            }

        }
        if(net==0 && flag==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
