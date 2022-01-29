#include<stdio.h>
#include<string.h>

int main()
{
   struct address
    {
        char address[100];
        char city[50];
        char country[50];
        int postal;
    };


    struct personal_info
    {
        char name[50];
        int nid;
        int age;
        int salary;
        struct address address;
    };



   struct personal_info a[100],tmp;
    int i=0,j,k;
    FILE *kp=fopen("t.txt","r");
    while(fgets(a[i].name,100,kp))
    {
        fscanf(kp,"%d",&a[i].nid);
        fgetc(kp);
        fgets(a[i].address.address,100,kp);
        fgets(a[i].address.city,100,kp);
        fgets(a[i].address.country,100,kp);
        fscanf(kp,"%d",&a[i].address.postal);
        fscanf(kp,"%d",&a[i].age);
        fscanf(kp,"%d",&a[i].salary);
        fgetc(kp);
        i++;
    }


    while(scanf("%d",&k)==1)
    {
        if(k==1)
        {
            int cnid;
            scanf("%d",&cnid);
            for(j=0; j<i; j++)
            {
                if(a[j].nid==cnid)
                {
                    printf("%s",a[j].name);
                    printf("%d\n",a[j].nid);
                    printf("%s\n",a[j].address.address);
                    printf("%s\n",a[j].address.city);
                    printf("%s\n",a[j].address.country);
                    printf("%d\n",a[j].address.postal);
                    printf("%d\n",a[j].age);
                    printf("%d\n",a[j].salary);
                }
            }
        }
        if(k==2)
        {
            int sal;
            scanf("%d",&sal);
            for(j=0; j<i; j++)
            {
                if(a[j].salary<sal)
                    printf("%s",a[j].name);
            }
        }
        if(k==3)
        {
            int cnid,in;
            scanf("%d %d",&cnid,&in);
            for(j=0; j<i; j++)
            {
                if(a[j].nid==cnid)
                {
                    a[j].salary+=(a[j].salary*in)/100;
                    char cname[100];
                    strcpy(cname,a[j].name);
                    cname[strlen(cname)-1]=0;
                    printf("Salary of %s has been increased to %d",cname,a[j].salary);
                }
            }
        }
        if(k==4)
        {
            int q,w;
            for (q = 0 ; q < ( i - 1 ); q++)
            {
                for (w = 0 ; w < i - q - 1; w++)
                {
                    if(a[w].salary<a[w+1].salary)
                    {
                        tmp=a[w];
                        a[w]=a[w+1];
                        a[w+1]=tmp;
                    }
                }
            }



            for (q = 0 ; q < ( i - 1 ); q++)
            {
                for (w = 0 ; w < i - q - 1; w++)
                {
                    if(a[w].salary==a[w+1].salary&&a[w].age>a[w+1].age)
                    {
                        tmp=a[w];
                        a[w]=a[w+1];
                        a[w+1]=tmp;
                    }
                }
            }



        }

    }
    return 0;
}
