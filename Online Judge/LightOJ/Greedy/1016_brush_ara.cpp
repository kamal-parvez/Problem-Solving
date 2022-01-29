#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,i;
	scanf("%d",&t);

	for(i=1;i<=t;i++){
		int n,w;
		scanf("%d %d",&n,&w);
		int ara[50004],x,y;

		for(int j=0;j<n;j++){
			scanf("%d %d",&x,&y);
			ara[j] = y;
		}

		sort(ara,ara+n);

		int cnt=1;
		int tar = 0;

		for(int j=1;j<n;j++){
			if(!(ara[j] <= ara[tar] + w)){
				cnt++;
				j=i;
			}
		}

		printf("Case %d: %d\n",i,cnt);
	}

	return 0;
}

