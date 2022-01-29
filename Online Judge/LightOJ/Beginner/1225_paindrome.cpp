#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;



int main(){
	int t;
	//scanf("%d",&t);
	cin>>t;

	for(int i=1;i<=t;i++){

		int n;
		scanf("%d",&n);
		int real = n;

		int rev = 0;
		for(;n!=0;){
			int a = n%10;
			rev *=10;
			rev += a;
			n /=10;
		}

		if(real==rev){
			printf("Case %d: Yes\n",i);
		}
		else{
			printf("Case %d: No\n",i);
		}
	}
	return 0;
}




