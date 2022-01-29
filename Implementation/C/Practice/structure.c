#include<stdio.h>
#include<string.h>

typedef struct
{
    char first[30];
    char last[30];
}nametype;

typedef struct
{
    int id;
    char grade[3];
    nametype name;
}student;

void calculate_grade(student *s,int mark)
{
    if(mark>=80)
        strcpy(s->grade,"A+");
    else if(mark>=70)
        strcpy(s->grade,"A");
    else if(mark>=60)
        strcpy(s->grade,"A-");
    else if(mark>=50)
        strcpy(s->grade,"B");
    else if(mark>=40)
        strcpy(s->grade,"C");
    else
        strcpy(s->grade,"F");
}

int main()
{
    student one[3];
    int i,n=3;
    int marks[]={72,82,60};

    for(i=0;i<3;i++)
    {
        printf("ID of %dth student : ",i+1);
        scanf("%d",&one[i].id);
        printf(" First Name of %dth student : ",i+1);
        scanf(" %[^\n]",one[i].name.first);
        printf("Last name of %d th student : ",i+1);
        scanf(" %[^\n]",one[i].name.last);
       // strcpy(one[i].grade,"");
    }
    for(i=0;i<3;i++)
    {
        calculate_grade(&one[i],marks[i]);
    }

    printf("Output : \n\n");

    for(i=0;i<n;i++)
    {
        printf("ID : %d\n",one[i].id);
        printf("Name : %s %s\n",one[i].name.first,one[i].name.last);
        printf("Grade : %s\n",one[i].grade);
    }
    return 0;
}
