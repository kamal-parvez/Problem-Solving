#include<bits/stdc++.h>
using namespace std;

int ara[23][3];


int color(int i,int j){

	int red,green,blue;

	red = ara[i][j] + color(i+1,j+1);
	green = ara[i][j] + color(i+1,j+1);
	blue = ara[i][j] + color(i+1,j+1);
}

int main(){
	int t;
	cin>>t;

	for(int i=1;i<=t;i==){
		int n;
		cin>>n;

		for(int j=0;j<n;j++){
			cin>>ara[j][0]>>ara[j][1]>>ara[j][2];
		}


	}
}
