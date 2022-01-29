#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int n,cap;
int weight[100],cost[100];

int fun(int i,int w){
	if(i==n+1)
		return 0;

	if(dp[i][w]!=-1){
		return dp[i][w];
	}

	int profit1,profit2;

	if(w+weight[i]<=cap){
		dp[i+1][w+weight[i]] = fun(i+1,w+weight[i]);
		profit1 = cost[i] + dp[i+1][w+weight[i]];
	}
	else{
		profit1 = 0;
	}

	dp[i+1][w] = fun(i+1,w);
	profit2 = dp[i+1][w];

	dp[i][w] = max(profit1,profit2);

	return dp[i][w];
}


int main(){
	freopen("napsack.txt","r",stdin);
	cin>>n>>cap;

	for(int i=1;i<=n;i++){
		cin>>weight[i]>>cost[i];
	}

	memset(dp,-1,sizeof(dp));

	int profit = fun(1,0);

	cout<<profit<<endl;

	return 0;
}
