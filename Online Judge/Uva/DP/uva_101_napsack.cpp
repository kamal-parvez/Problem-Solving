#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int cost[1003],weight[1003];
int n,cap;


int fun(int i,int w){
	if(i==n+1){
		return 0;
	}

	int profit1,profit2;

	if(dp[i][w]!=-1){
		return dp[i][w];
	}

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
	//freopen("uva_napsack.txt","r",stdin);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;

		for(int j=1;j<=n;j++){
			cin>>cost[j]>>weight[j];
		}

		int people;
		cin>>people;
		int value=0;

		for(int j=1;j<=people;j++){
			cin>>cap;
			memset(dp,-1,sizeof(dp));
			value+=fun(1,0);
			//cout<<value<<endl;
		}

		cout<<value<<endl;
	}

	return 0;
}
