#include<stdio.h>
int main()
{
    struct student{
        int id;
        char *name;
    };

    struct student one;
    one.id=10;
    one.name="Kamal Parvez";
    printf("ID : %d\n",one.id);
    printf("%s\n",one.name);

}
