#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	int n,m;

	for(int i=1;i<=t;i++){

		scanf("%d %d",&n,&m);
		long long int x = n/2;
		long long int res = m * x;

		printf("Case %d: %lld\n",i,res);
	}
	return 0;
}


