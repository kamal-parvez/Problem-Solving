#include<iostream>
using namespace std;


int coin[100];
int dp[100][100];
int target;
int n;

int fun(int i,int amount){
	if(i>=n){
		if(amount==target){
			return 1;
		}
		else{
			return 0;
		}
	}

	int part1=0,part2=0;

	if(dp[i][amount]!=-1){
		return dp[i][amount];
	}

	if(amount + coin[i] <= target){
		part1 = fun(i,amount+coin[i]);
	}

	part2 = fun(i+1,amount);

	return dp[i][amount] = part1|part2;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>coin[i];
	}

	while(cin>>target){

		memset(dp,-1,sizeof(dp));

		int x = fun(0,0);

		if(x==0){
			cout<<"Possible"<<endl;
		}

		else{
			cout<<"Not possible"<<endl;
		}

	}

	return 0;
}
