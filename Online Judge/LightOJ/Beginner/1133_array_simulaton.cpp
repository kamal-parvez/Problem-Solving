#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

	int t,i;
	int ara[103];

	cin>>t;

	for(i=1;i<=t;i++){
		int n,m;
		char op;
		int d,y,z;

		printf("Case %d:\n",i);

		cin>>n>>m;

		int j,k;

		for(j=0;j<n;j++){
			cin>>ara[j];
		}

		for(j=1;j<=m;j++){
			cin>>op;

			if(op=='S'){
				cin>>d;
				for(k=0;k<n;k++){
					ara[k]+=d;
				}
			}
			else if(op=='M'){
				cin>>d;
				for(k=0;k<n;k++){
					ara[k]*=d;
				}
			}
			else if(op=='D'){
				cin>>d;
				for(k=0;k<n;k++){
					ara[k]/=d;
				}
			}
			else if(op=='R'){
				reverse(ara,ara+n);
			}
			else if(op=='P'){
				cin>>y>>z;
				swap(ara[y],ara[z]);
			}
		}

		for(j=0;j<n;j++){
			cout<<ara[j];
			if(j<n-1)
				cout<<" ";
		}
		cout<<endl;

	}
	return 0;
}
