#include<stdio.h>
main()
{
    int v1[100],v2[100],m,n,i,cnt=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&v2[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(v1[i]==v2[j]){
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
