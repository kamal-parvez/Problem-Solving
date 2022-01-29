#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,ans;
    while(scanf("%lld%lld",&a,&b)==2){
        ans=b-a;
        ans=abs(ans);
        printf("%lld\n",ans);
    }
    return 0;
}
