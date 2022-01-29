#include<bits/stdc++.h>
using namespace std;

#define blue 1
#define red 2
#define white 3

long long int dp[50];

long long int flag(int n){

	if(n==1 || n==2)
		return 2;

	if(dp[n]!=-1)
		return dp[n];

	return dp[n]=flag(n-1) + flag(n-2);
}

int main(){
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	cout<<flag(n)<<endl;
	return 0;
}
