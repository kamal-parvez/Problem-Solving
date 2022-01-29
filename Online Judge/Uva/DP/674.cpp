#include<bits/stdc++.h>
using namespace std;


int coin[] = {50,25,10,5,1};
int target;
int dp[6][7490];

int call(int i,int amount){
	if(i>=5){
		if(amount==0){
			return 1;
		}
		else{
			return 0;
		}
	}

	if(dp[i][amount]!=-1){
		return dp[i][amount];
	}

	int part1=0,part2;

	if(amount - coin[i] >=0){
		part1 = call(i,amount - coin[i]);
	}

	part2 = call(i+1,amount);

	dp[i][amount] = part1 + part2;

	return dp[i][amount];
}



int main(){

	memset(dp,-1,sizeof(dp));
	while(cin>>target){
		//memset(dp,-1,sizeof(dp));
		cout<<call(0,target)<<endl;
	}

	return 0;
}
