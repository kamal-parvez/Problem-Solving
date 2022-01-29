#include<stdio.h>

struct student
{
    int roll;
    int marks;
    int name[20];
};

int main()
{
    struct student s[5],tem;
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%d",&s[i].marks);
        scanf("%s",s[i].name);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].roll>s[j].roll)
            {
                tem=s[i];
                s[i]=s[j];
                s[j]=tem;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d %d %s\n",s[i].roll,s[i].marks,s[i].name);
    }
    return 0;
}
