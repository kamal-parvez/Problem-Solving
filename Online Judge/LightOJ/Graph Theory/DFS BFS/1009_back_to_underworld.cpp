#include<bits/stdc++.h>
using namespace std;

#define SZ 200003
#define blue 1
#define golden 2
#define white 3


struct bipartite{
	int node,edge;
	int color[SZ];
	vector<int>vec[SZ];
	int cnt[4];
	set<int>st;

	void input(){
		scanf("%d",&edge);
		int i,u,v;
		for(i=0;i<edge;i++){
			scanf("%d %d",&u,&v);
			//color[u]=white;
			//color[v]=white;
			st.insert(u);
			st.insert(v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		node = st.size();
	}


	void bfs(int src){
		queue<int>q;
		cnt[blue]=0;
		cnt[golden]=0;

		for(int i=1;i<=node;i++){
			color[i]=white;
		}

		color[src]=blue;
		cnt[blue]++;
		q.push(src);

		while(!q.empty()){
			int u = q.front();
			q.pop();

			for(int i=0;i<vec[u].size();i++){
				int v = vec[u][i];

				if(color[u]==golden && color[v]==white){
					color[v]=blue;
					cnt[blue]++;
					q.push(v);
				}
				else if(color[u]==blue && color[v]==white){
					color[v]=golden;
					cnt[golden]++;
					q.push(v);
				}


			}
		}
	}

	void output(int i){
		bfs(1);
		int x = max(cnt[1],cnt[2]);
		printf("Case %d: %d\n",i,x);
	}
};


int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		bipartite bp;
		bp.input();
		bp.output(i);
	}
	return 0;
}



