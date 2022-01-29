

// it was about bicoloing and napsack

#include<bits/stdc++.h>
using namespace std;

#define inf -1
#define Blue 1
#define Red 2
#define White 0


struct mojaaaa{

	vector<int>vec[2002];
	int node;
	int edge;
	int bull,cow;
	int color[2002];
	int dp[1001][1001];
	int bata,cata;


	void input(){

		memset(color,White,sizeof(color));
		memset(dp,-1,sizeof(dp));
		scanf("%d %d %d",&bull,&cow,&edge);
		int u,v;

		for(int i=0;i<edge;i++){
			scanf("%d %d",&u,&v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}

		node = bull + cow;
	}



	bool bicoloring(int src){

		bata=0;
		cata=0;

		color[src] = Blue;
		bata++;

		queue<int> q;

		q.push(src);

		while(!q.empty()){
			int u = q.front();
			q.pop();

			for(int i=0;i<vec[u].size();i++){

				int t = vec[u][i];
				if(color[t]==White){
					if(color[u]==Blue){
						color[t] = Red;
						cata++;
						//visited[i]=1;
					}
					else if(color[u]==Red){
						color[t] = Blue;
						bata++;
						//visited[i]=1;
					}

					q.push(t);
				}

				if(color[u]==color[t]){
					return false;
				}
			}
		}

		return true;
	}


	int farming(int b,int c){

		if(b==bull && c==cow)
			return 1;
		if(b>bull || c>cow)
			return 0;


		if(dp[b][c]!=-1){
			return dp[b][c];
		}

		int ret1 = 0, ret2 = 0;

		for(int i=1;i<=node;i++){
			if(color[i]==White){
				bool seen = bicoloring(i);

				if(seen==true){
					if(bata + b <= bull){
						ret1 = farming(bata + b,cata + c);
					}

					if(cata + c <= cow){
						ret2 = farming(cata + b, bata + c);
					}

					return dp[b][c] = ret1 || ret2;
				}

				else
					return 0;
			}

		}

		return 0;

	}

};



int main(){
	int t;
	cin>>t;

	for(int i=1;i<=t;i++){

		mojaaaa moja;
		moja.input();
		int x = moja.farming(0,0);

		if(x==1){
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}

	return 0;
}
