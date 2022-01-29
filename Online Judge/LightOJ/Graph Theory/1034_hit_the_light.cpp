#include<bits/stdc++.h>
using namespace std;

#define SZ 100000
#define white 1
#define grey 2
#define black 3

struct vertex{
	int u,in,out;

	bool operator<(const vertex &ob)const{
		if(in==ob.in)
			return out>ob.out;

		else{
			return in<ob.in;
		}
	}

}ver;


struct light{
	int node,edge,comp;
	int indeg[SZ];
	int outdeg[SZ];
	int color[SZ];
	vector<int>vec[SZ];
	vector<vertex>deg;

	void input(){
		scanf("%d %d",&node,&edge);
		memset(indeg,0,sizeof(indeg));
		memset(outdeg,0,sizeof(outdeg));

		int i,u,v;

		for(i=0;i<edge;i++){
			scanf("%d %d",&u,&v);
			indeg[v]++;
			outdeg[u]++;
			vec[u].push_back(v);
		}
	}

	void trigger(){

		int i;

		for(i=1;i<=node;i++){
			color[i]=white;
			ver.u=i;
			ver.in=indeg[i];
			ver.out=outdeg[i];
			deg.push_back(ver);
		}

		comp=0;

		sort(deg.begin(),deg.end());
		vector<vertex> :: iterator it;

		for(it=deg.begin();it!=deg.end();it++){

			if(color[it->u]==white){
				comp++;
				dfs(it->u);
			}
		}
	}

	void dfs(int u){
		color[u]=grey;

		for(int i=0;i<vec[u].size();i++){
			int t = vec[u][i];
			if(color[t]==white){
				dfs(t);
			}
		}
		color[u]=black;
	}

	void output(int i){
		trigger();
		printf("Case %d: %d\n",i,comp);
	}
};

int main(){
	int i,t;
	//freopen("1034.txt","r",stdin);
	scanf("%d",&t);

	for(i=1;i<=t;i++){
		light li;
		li.input();
		li.output(i);
	}
	return 0;
}
