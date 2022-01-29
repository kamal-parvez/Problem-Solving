#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define SZ 1000001

double dp[SZ];

int main(){
	int n,i,t,base;
	double res;

	scanf("%d",&t);

	dp[1]=0;

	for(i=2;i<=SZ;i++){
		dp[i]=log(i)+dp[i-1];
	}

	for(int j=1;j<=t;j++){

		scanf("%d %d",&n,&base);

		res = dp[n]/log(base);

		long long int abc =(int) floor(res);

		printf("Case %d: %lld\n",j,abc+1);

	}

	return 0;
}
