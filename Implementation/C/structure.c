#include<stdio.h>
#include<string.h>


void print_stdnt_info(student_info s)
{

    printf("Roll : %d\n",s.roll);
    printf("Name : %s\n",s.name);
    printf("email : %s\n",s.email);
    printf("CGPA : %lf\n",s.cgpa);

}

int main()
{
    struct student_info
{
    int roll;
    char name[50];
    char email[50];
    double cgpa;
};

    int i;
    student_info stArr[100];
    for(i=0;i<3;i++)
    {
        scanf("%d",&stArr[i].roll);
        gets(stArr[i].name);
        scanf("%s",&stArr[i].email);
        scanf("%lf ",&stArr[i].cgpa);
    }

    student_info tmp;
    for(i=0;i<3;i++)
    {
        if(stArr[i].cgpa<stArr[i+1].cgpa)
        {
            tmp=stArr[i];
            stArr[i]=stArr[i+1];
            stArr[i+1]=tmp;
        }
    }
    for(i=0;i<3;i++)
    {
        print_stdnt_info(stArr[i]);
    }
}
