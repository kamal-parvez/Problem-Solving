#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	int n,p,q;
	int ara[40];
	for(int i=1;i<=t;i++){

		scanf("%d %d %d",&n,&p,&q);

		for(int j=0;j<n;j++){
			scanf("%d",&ara[j]);
		}

		int cnt = 0;
		int gram = 0;

		for(int j=0;j<n;j++){
			if(gram + ara[j] <= q && cnt + 1 <= p){
				gram += ara[j];
				cnt++;
			}
		}

		printf("Case %d: %d\n",i,cnt);
	}
	return 0;
}

