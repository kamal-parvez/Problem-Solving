#include<stdio.h>
#include<string.h>

int main()
{
    struct st_info
    {
        int roll;
        char name[50];
        int marks;
    };

    struct st_info a[100],tem;
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].roll);
        scanf("%s",a[i].name);
        scanf("%d",&a[i].marks);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j].marks<a[j+1].marks)
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n%s\n%d\n",a[i].roll,a[i].name,a[i].marks);
    }
    return 0;
}
