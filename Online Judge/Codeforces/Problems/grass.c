#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,k;
    char str[100];
    scanf("%d %d",&n,&k);
    scanf("%s",str);

    int i,gotg,gott,flag=1;
    for(i=0;i<n;i++)
    {
        if(str[i]=='G')gotg=i;
        if(str[i]=='T')gott=i;
    }

    int dif=abs(gotg-gott);

    if(dif%k!=0)
        flag=0;
    else
    {
        if(gotg>gott)
        {
            for(i=gott;i<=gotg;i=i+k)
            {
                if(str[i]=='#')
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            for(i=gotg;i<=gott;i=i+k)
            {
                if(str[i]=='#')
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");
    return 0;
}
