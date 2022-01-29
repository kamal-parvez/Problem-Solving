#include<bits/stdc++.h>
using namespace std;


int n=10;
int value[] = {9 ,2 ,5,3,7, 11 ,8 ,10 ,13 ,6};
int dp[100];
int dir[100];

int longest(int u){

	if(dp[u]!=-1){
		return dp[u];
	}

	int mx=-1;

	for(int v=u+1;v<n;v++){
		if(value[v]>value[u]){
			int x = longest(v);
			if(x>mx){
				mx = x;
				dir[u] = v;
			}
		}
	}

	dp[u] = 1 + mx;
	return dp[u];
}


void solution(int start){
	while(dir[start]!=-1){
		printf("Index %d Value %d\n",start,value[start]);
		start = dir[start];
	}
}

int main(){
	memset(dp,-1,sizeof(dp));
	memset(dir,-1,sizeof(dir));

	int lis =0,start;

	for(int i=0;i<n;i++){
		int x = longest(i);

		printf("Longest path from %d\n",x);
		if(lis<x){
			lis = x;
			start = i;
		}
	}

	printf("Longest LIS is %d started from %d\n",lis,start);
	solution(start);
}
