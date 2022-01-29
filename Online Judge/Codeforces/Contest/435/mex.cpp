#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int cnt[103];

int main(){
	int n,x,i,c=0;
	int ara[102];
	cin>>n>>x;
	for(i=0;i<n;i++){
		cin>>ara[i];
		cnt[ara[i]]=1;
	}

	sort(ara,ara+n);

	for(i=0;i<x;i++){
		if(cnt[i]==0){
			c++;
		}
	}

	if(cnt[x]==1)c++;

	cout<<c<<endl;

	return 0;
}
