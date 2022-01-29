#include<bits/stdc++.h>
using namespace std;

int dp[52][1000];
int coin[52];
int have[52];
int n,make;


int ways(int i,int amount){

	if(i>=n){
		if(amount==make)
			return 1;
		else
			return 0;
	}

	if(dp[i][amount]!=-1){
		return dp[i][amount];
	}

	int ret1=0,ret2=0,ret3=0;

	if(coin[i] + amount <= make){

		int j=0;
		int take=0;
		while(j<have[i]){
			if(amount+take+coin[i] <= make){
				take += coin[i];
				ret1 = ways(i,amount+take);
				ret2 = ways(i+1,amount+take);
			}
			j++;
		}
	}

	ret3 = ways(i+1,amount);

	dp[i][amount] = ret1 + ret2 + ret3;

	return dp[i][amount];
}


int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		scanf("%d %d",&n,&make);

		for(int j=0;j<n;j++){
			scanf("%d",&coin[j]);
		}

		for(int j=0;j<n;j++){
			scanf("%d",&have[j]);
		}

		memset(dp,-1,sizeof(dp));

		printf("Case %d: %d\n",i,ways(0,0));
	}
	return 0;
}
