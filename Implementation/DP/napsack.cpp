#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int n,cap;
int weight[100],cost[100];


int fun(int i,int w){

	if(i==n+1)
		return 0;

	int profit1,profit2;

	if(w + weight[i]<=cap){
		profit1 = cost[i] + fun(i+1,w+weight[i]);
	}
	else{
		profit1 = 0;
	}

	profit2 = fun(i+1,w);

	return max(profit1,profit2);
}


int main(){

	freopen("napsack.txt","r",stdin);

	cin>>n>>cap;

	for(int i=1;i<=n;i++){
		cin>>weight[i]>>cost[i];
	}

	int profit = fun(1,0);

	cout<<profit<<endl;

	return 0;
}
