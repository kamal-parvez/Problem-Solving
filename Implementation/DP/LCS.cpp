#include<bits/stdc++.h>
using namespace std;


char A[100],B[100];
int lenA,lenB;
int dp[100][100];


int LCS(int i,int j){

	if(i==lenA || j== lenB)
		return 0;


	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int ans = 0;

	if(A[i]==B[j]){
		ans = 1 + LCS(i+1,j+1);
	}
	else{
		int part1 = LCS(i+1,j);
		int part2 = LCS(i,j+1);

		ans = max(part1,part2);
	}

	dp[i][j] = ans;

	return dp[i][j];
}

void printLCS(int i,int j){
	if(i==lenA || j==lenB)
		return;
	if(A[i]==B[j]){
		cout<<A[i];
		printLCS(i+1,j+1);
	}
	else{
		if(dp[i][j+1] > dp[i+1][j])
			printLCS(i,j+1);
		else
			printLCS(i+1,j);
	}
}


//Print all the LCS

string ans;
void printAll(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0'){
		cout<<ans<<endl;
		return;
	}
	if(A[i]==B[j]){
		ans+=A[i];
		printAll(i+1,j+1);
		ans.erase(ans.end()-1); //Delete last character
	}
	else
	{
		if(dp[i+1][j]>dp[i][j+1]) printAll(i+1,j);
		else if(dp[i+1][j]<dp[i][j+1]) printAll(i,j+1);
		else
		{
			printAll(i+1,j);
			printAll(i,j+1);
		}
	}
}




int main(){
	cin>>A>>B;
	lenA = strlen(A);
	lenB = strlen(B);

	memset(dp,-1,sizeof(dp));

	cout<<LCS(0,0)<<endl;
	printLCS(0,0);
	cout<<endl;
	cout<<"All the LCS"<<endl;
	printAll(0,0);
	return 0;
}
