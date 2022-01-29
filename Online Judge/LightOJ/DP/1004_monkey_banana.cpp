#include<bits/stdc++.h>
using namespace std;

#define inf -100


int dp[200][102];
int mat[200][102];
int n;


int banana(int i,int j){
	if(i==2*n-2){
		return mat[i][j];
	}

	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int part1 = inf, part2 = inf;

	if(mat[i+1][j]!=-1){
		part1 = mat[i][j] + banana(i+1,j);
	}

	if(i<n-1 && mat[i+1][j+1]!=-1){
		part2 = mat[i][j] + banana(i+1,j+1);
	}

	else if(i>=n-1 && mat[i+1][j-1]!=-1){
		part2 = mat[i][j] + banana(i+1,j-1);
	}

	return dp[i][j] = max(part1,part2);
}


int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);

		memset(mat,-1,sizeof(mat));

		//scan n row

		for(int j=0;j<n;j++){
			//int x = n/2;
			for(int k=1;k<=j+1;k++){
				scanf("%d",&mat[j][k]);
			}
		}

		int col = 2*n-1;
		int x = n-1;

		//scan next n-1 row

		for(int j=n;j<col;j++){

			for(int k=1;k<=x;k++){
				scanf("%d",&mat[j][k]);
			}
			//mat[j][x+1]=-1;
			x--;
		}

		//initialize first column -1

		/*for(int j=0;j<col;j++){
			mat[j][0] = -1;
		}*/


		memset(dp,-1,sizeof(dp));

		int res = banana(0,1);
		printf("Case %d: %d\n",i,res);

	}

	return 0;
}
