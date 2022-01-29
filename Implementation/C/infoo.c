#include<stdio.h>
#include<string.h>
struct adress
{
    char adress[100];
    char city[50];
    char country[50];
    int pstcd;
};

struct personal_info
{
    char name[100];
    int NID;

    struct adress adress;
    int age;
    int salary;


};


main()
{
    struct personal_info ar[100],st;
    FILE *fp=fopen("t.txt","r");
    int i=0;
    while(fgets(ar[i].name,100,fp))
    {
        fscanf(fp,"%d",&ar[i].NID);
        fgetc(fp);
        fgets(ar[i].adress.adress,100,fp);
        fgets(ar[i].adress.city,100,fp);
        fgets(ar[i].adress.country,100,fp);
        fscanf(fp,"%d",&ar[i].adress.pstcd);
        fscanf(fp,"%d",&ar[i].age);
        fscanf(fp,"%d",&ar[i].salary);
        fgetc(fp);
        i++;
    }
    int tp,j;
    while(scanf("%d",&tp)==1)
    {
        if(tp==1)
        {
            int tmpnid;
            scanf("%d",&tmpnid);
            for(j=0; j<i; j++)
            {
                if(ar[j].NID==tmpnid)
                {
                    printf("%s",ar[j].name);
                    printf("%d\n",ar[j].NID);
                    printf("%s",ar[j].adress.adress);
                    printf("%s",ar[j].adress.city);
                    printf("%s",ar[j].adress.country);
                    printf("%d\n",ar[j].adress.pstcd);
                    printf("%d\n",ar[j].age);
                    printf("%d\n",ar[j].salary);
                }
            }
        }
        if(tp==2)
        {
            int slr;
            scanf("%d",&slr);
            for(j=0; j<i; j++)
            {
                if(ar[j].salary<slr)
                    printf("%s",ar[j].name);
            }
        }
        if(tp==3)
        {
            int tmpnid,i;
            scanf("%d %d",&tmpnid,&i);
            for(j=0; j<i; j++)
            {
                if(ar[j].NID==tmpnid)
                {
                    ar[j].salary+=(ar[j].salary*i)/100;
                    char tmpnm[100];
                    strcpy(tmpnm,ar[j].name);
                    tmpnm[strlen(tmpnm)-1]=0;
                    printf("Salary of %s has been increased to %d",tmpnm,ar[j].salary);
                }
            }
        }
        if(tp==4)
        {
            int q,w;
            for (q = 0 ; q < ( i - 1 ); q++)
            {
                for (w = 0 ; w < i - q - 1; w++)
                {
                    if(ar[w].salary<ar[w+1].salary)
                    {
                        st=ar[w];
                        ar[w]=ar[w+1];
                        ar[w+1]=st;
                    }
                }
            }



            for (q = 0 ; q < ( i - 1 ); q++)
            {
                for (w = 0 ; w < i - q - 1; w++)
                {
                    if(ar[w].salary==ar[w+1].salary&&ar[w].age>ar[w+1].age)
                    {
                        st=ar[w];
                        ar[w]=ar[w+1];
                        ar[w+1]=st;
                    }
                }
            }



        }

    }
}
