#include<bits/stdc++.h>
using namespace std;

#define SZ 20004


struct vertex{
	int v;
	int w;

	bool operator<(const vertex &ob)const{
		return w<ob.w;
	}
}ver;


struct dijkastra{
	int node,edge,src,des;
	int dis[SZ];
	vector<vertex>vec[SZ];

	void input(){
		cin>>node>>edge>>src>>des;
		int u,v,w;

		for(int i=0;i<edge;i++){
			cin>>u>>v>>w;
			ver.v=v;
			ver.w=w;
			vec[u].push_back(ver);
			ver.v=u;
			vec[v].push_back(ver);
		}

	}

	void email(int src){
		priority_queue<vertex>pq;
		int i;
		vertex ver1,ver2;

		for(i=0;i<node;i++){
			dis[i]=INT_MAX;
		}

		dis[src]=0;
		ver.v=src;
		ver.w=0;
		pq.push(ver);

		while(!pq.empty()){
			ver = pq.top();
			pq.pop();

			for(int i=0;i<vec[ver.v].size();i++){
				ver1=vec[ver.v][i];
				if(dis[ver.v] + ver1.w < dis[ver1.v]){
						dis[ver1.v] = dis[ver.v] + ver1.w ;
						pq.push(ver1);
				}
			}
		}

	}

	void output(int i){
		email(src);
		if(dis[des]!=INT_MAX)
			printf("Case #%d: %d\n",i,dis[des]);
		else
			printf("Case #%d: unreachable\n",i);
	}
};

int main(){
	int i,t;
	cin>>t;
	for(i=1;i<=t;i++){
		dijkastra dij;
		dij.input();
		dij.output(i);
	}
}
