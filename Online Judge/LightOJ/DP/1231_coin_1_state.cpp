#include<bits/stdc++.h>
using namespace std;

int dp[52][22][1000];
int coin[52];
int have[52];
int n,make;


long long int ways(int i,int taken_i,int amount){

	if(i>=n){
		if(amount==make)
			return 1;
		else
			return 0;
	}

	if(dp[i][taken_i][amount]!=-1){
		return dp[i][taken_i][amount];
	}

	long long int ret1=0,ret2=0,ret3=0;

	if(coin[i] + amount <= make && taken_i<have[i]){

		ret1 = ways(i,taken_i+1,amount+coin[i]);
	}

	ret2 = ways(i+1,0,amount);

	return dp[i][taken_i][amount] = (ret1 + ret2) % 100000007 ;
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

		printf("Case %d: %d\n",i,ways(0,0,0) % 100000007);
	}
	return 0;
}

