#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	int t;
	cin>>t;

	for(int i=1;i<=t;i++){
		int n;
		cin>>n;

		int cnt = 0;

		while(n){
			cnt += n%2;
			n = n/2;
		}

		if(cnt%2==0){
			printf("Case %d: even\n",i);
		}
		else{
			printf("Case %d: odd\n",i);
		}
	}

	return 0;
}
