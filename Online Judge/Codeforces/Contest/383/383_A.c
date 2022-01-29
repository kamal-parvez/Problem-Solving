#include<stdio.h>

int cal(int pow, int val, int MOD)//big mod
{
   if(pow == 0)
      return 1;
   int v = cal(pow/2, val, MOD);

   if(pow % 2 == 0)
      return (v*v) % MOD;
   else
      return (((v*val) % MOD) * v) % MOD;

}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",cal(n,2,10));
    return 0;
}
