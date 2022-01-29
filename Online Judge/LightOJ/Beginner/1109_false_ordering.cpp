#include<bits/stdc++.h>
using namespace std;

struct order{
	int num,div;

	bool operator<(const order &ob)const{
		if(div==ob.div){
			return num > ob.num;
		}
		else {
			return div < ob.div;
		}
	}
};

struct order ara[1003];

void prime(){
	for(int i=1;i<=1000;i++){
		ara[i].num=i;
		ara[i].div=1;
		for(int j=2;j<=i;j++){
			if(i%j==0){
				ara[i].div++;
			}
		}
	}
}


int main(){

	int t,i;
	cin>>t;

	prime();

	sort(ara+1,ara+1001);

	for(i=1;i<=t;i++){
		int n;
		cin>>n;
		int x = ara[n].num;
		printf("Case %d: %d\n",i,x);
	}

	return 0;
}


