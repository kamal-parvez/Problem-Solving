#include<bits/stdc++.h>
using namespace std;

int coin[] = {5,8,11,15,18};
int make;
int dp[6][1000];


int call(int i,int amount){
	if(i>=5){
		if(amount==make)
			return 1;
		else
			return 0;
	}

	if(dp[i][amount]!=-1)
		return dp[i][amount];

	int part1,part2;

	if(amount + coin[i] <=make){
		part1 = call(i,amount + coin[i]);
	}
	else{
		part1 = 0;
	}

	part2 = call(i+1,amount);

	dp[i][amount] = part1 | part2;

	return dp[i][amount];
}

int main(){
	while(cin>>make){
		memset(dp,-1,sizeof(dp));
		int x = call(0,0);
		if(x==1)
			cout<<"Possible"<<endl;
		else
			cout<<"Not Possible"<<endl;
	}

	return 0;
}
