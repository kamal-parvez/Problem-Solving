#include<stdio.h>
main()
{
    int i,j,n=1,m;
    scanf("%d %d",&i,&j);

    for(m=i;m<=j;m++){

        while(m!=1){
            if(m%2==1){
               m=3*m+1;
                n++;
            }
            else{
                 m=m/2;
                n++;
            }
        }
    }
    printf("%d %d %d\n",i,j,n);
    return 0;
}
