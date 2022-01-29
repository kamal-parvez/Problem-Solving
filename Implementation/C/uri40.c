#include<stdio.h>
main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double avg;
    avg = (a*2 + b*3 + c*4 + d)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7)
        printf("Aluno aprovado.\n");
    else if(avg<5)
        printf("Aluno reprovado.\n");
    else if(avg>=5 && avg<=6.9){
        printf("Aluno em exame.\n");
        double e;
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        double avg1 = (avg+e)/2;
        if(avg1>=5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg1);
    }
    return 0;
}
