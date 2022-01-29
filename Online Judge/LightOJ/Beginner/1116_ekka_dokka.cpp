#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long int w;
		cin>>w;

		if(w%2==1){
			printf("Case %d: Impossible\n",i);
		}

		else{
			long long int m=2,n;
			int div=2;

			while(1){
				n = w/div;
				if(n%2==1){
					break;
				}
				else{
					m*=2;
					w/=2;
				}
			}

			printf("Case %d: %lld %lld\n",i,n,m);
		}
	}

	return 0;
}
