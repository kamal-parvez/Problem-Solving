#include<stdio.h>
#include<conio.h>

int main()
{
    int id=44;
    float gp=3.87;
    float cgpa=3.78;
    int* a;
    a=&id;
    //int a;
   //scanf("%d",&*a);
    printf("%d\n",a);

    printf("Address of id is   %d\n",&id);
    printf("Address of gp is   %d\n",&gp);
    printf("Address of cgpa is   %d\n",&cgpa);
    return 0;
}
