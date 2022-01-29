#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int ara[3] = {a,b,c};
		sort(ara,ara+3);

		int x = ara[0]*ara[0] + ara[1]*ara[1];
		int y = ara[2] * ara[2];

		if(y==x){
			printf("Case %d: yes\n",i);
		}
		else{
			printf("Case %d: no\n",i);
		}
	}
	return 0;
}
