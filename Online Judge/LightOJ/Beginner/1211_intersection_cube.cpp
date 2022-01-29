#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,i;
	cin>>t;
	//int x1[101],y1[101],z1[101],x2[101],y2[101],z2;

	int x1,y1,z1;
	int x2,y2,z2;

	for(i=1;i<=t;i++){
		int n;
		int a1=-1,b1=-1,c1=-1;
		int a2=INT_MAX,b2=INT_MAX,c2=INT_MAX;
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>x1>>y1>>z1>>x2>>y2>>z2;
			a1 = max(x1,a1);
			b1 = max(y1,b1);
			c1 = max(z1,c1);
			a2 = min(x2,a2);
			b2 = min(y2,b2);
			c2 = min(z2,c2);
		}

		long long int res = (a2-a1) * (b2-b1) * (c2-c1);
		printf("Case %d: %lld\n",i,res);
	}
	return 0;
}
