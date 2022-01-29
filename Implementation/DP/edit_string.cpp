#include<bits/stdc++.h>
using namespace std;

char A[100];
char B[100];
int len_A;
int len_B;
int dp[100][100];


int operation(int i,int j){

	if(i==len_A)
		return len_B-j;
	if(j==len_B)
		return len_A - i;

	if(dp[i][j]!=-1)
		return dp[i][j];

	if(A[i]==B[j]){
		return operation(i+1,j+1);
	}
	else{
		int in = 1 + operation(i,j+1);
		int rep = 1 + operation(i+1,j+1);
		int del = 1 + operation(i+1,j)

		//return dp[i][j] = min(in,min(rep,del));

		int x;

		if(in<=del && in<=rep)
			x= in;
		else if(rep<=in && rep<=del)
			x = rep;

		else
			x = del;

		return dp[i][j] = x;

	}
}


int main(){
	cin>>A>>B;

	len_A = strlen(A);
	len_B = strlen(B);
	memset(dp,-1,sizeof(dp));

	cout<<operation(0,0)<<endl;

	return 0;
}
