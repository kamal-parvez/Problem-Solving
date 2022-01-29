#include<bits/stdc++.h>
using namespace std;

#define inf INT_MIN

int r=3,c=3;
int dp[10][10];
int mat[][10] = { {-1,2,5},
				  {4,-2,5},
				  {1,2,10}
				};


int fun(int i,int j){
	if((i>=0 && i<r) && (j>=0 && j<c)){

		if(dp[i][j]!= -1){
			dp[i][j];
		}

		int ret = inf;

		ret = max(ret,fun(i+1,j) + mat[i][j]);
		ret = max(ret,fun(i+1,j+1) + mat[i][j]);
		ret = max(ret,fun(i+1,j-1) + mat[i][j]);

		return dp[i][j] = ret;
	}
	else{
		return 0;
	}
}

int main(){
	memset(dp,-1,sizeof(dp));
	cout<<fun(0,0)<<endl;
	return 0;
}
