#include<stdio.h>
main()
{

    int i,j,m,n,t,k;
    while(scanf("%d %d",&i,&j)==2 && i>0 && j>0)
    {
        printf("%d %d ",i,j);
        int max=0;
        if(i>j){
            k=i;
            i=j;
            j=k;
        }

        for(m=i;m<=j;m++){
            t=m;
            n=1;
            while(t!=1){

                if(t%2!=0){
                    t=3*t +1;
                    n++;
                }
                else{
                    t=t/2;
                    n++;
                }
            }
            if(n>max){
                max=n;
            }
        }

        printf("%d\n",max);

    }
    return 0;
}
