#include<iostream>
#include<stdio.h>
using namespace std;


struct snake{
	int n,k;

	void input(int cse){
		scanf("%d",&n);
		int u,v,res,flag=0;

		for(int i=1;i<=n;i++){
			scanf("%d",&k);
			for(int j=1;j<=k;j++){
				scanf("%d %d",&u,&v);

				if(i==1 && j==1){
					res=v;
					continue;
				}
				if(res!=u){
					flag=1;
				}
				res=v;
			}
		}

		if(flag==1){
			printf("Case %d: NO\n",cse);
		}
		else{
			printf("Case %d: YES\n",cse);
		}
	}
};


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		snake sn;
		sn.input(i);
	}
	return 0;
}
