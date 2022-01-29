#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>PIT;

bool cmp(PIT a,PIT b){
	return a.second < b.second;
}


int main(){
	int t,i;
	scanf("%d",&t);

	for(i=1;i<=t;i++){
		int n,w;
		scanf("%d %d",&n,&w);
		int y,x;

		vector<PIT>v;

		for(int j=0;j<n;j++){
			scanf("%d %d",&x,&y);
			v.push_back(PIT(x,y));
		}

		//sort(y,y+n);
		sort(v.begin(),v.end(),cmp);

		int cnt=1;
		int tar = 0;

		/*for(int j=1;j<n;j++){
			if(!(y[j] >= y[tar] && y[j] <= y[tar]+w)){
				cnt++;
				j=i;
			}
		}*/

		for(int j=1;j<n;j++){
			if(!(v[j].second <= v[tar].second+w)){
				cnt++;
				j=i;
			}
		}


		printf("Case %d: %d\n",i,cnt);
	}

	return 0;
}
