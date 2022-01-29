#include<bits/stdc++.h>
using namespace std;


#define SZ 103
#define inf 30000


struct vertex{
	int v,w;

	bool operator<(const vertex &ob)const{
		return w<ob.w;
	}
}ver;


struct brush{
	int city,road;
	int dis[SZ];
	vector<vertex>vec[SZ];


	void input(){
		scanf("%d %d",&city,&road);
		int u,v,w,i;
		for(i=0;i<road;i++){
			scanf("%d %d %d",&u,&v,&w);
			ver.v=v;
			ver.w=w;
			vec[u].push_back(ver);
			ver.v=u;
			vec[v].push_back(ver);
		}
	}

	void dijkastra(int src){
		int i;
		vertex vt;
		for(i=1;i<=city;i++){
			dis[i]=inf;
		}

		priority_queue<vertex>pq;

		dis[src]=0;
		ver.v=src;
		ver.w=0;
		pq.push(ver);

		while(!pq.empty()){
			ver = pq.top();
			pq.pop();

			for(i=0;i<vec[ver.v].size();i++){
				vt = vec[ver.v][i];

				if(dis[ver.v] + vt.w < dis[vt.v]){
					dis[vt.v] = dis[ver.v] + vt.w;
					pq.push(vt);
				}
			}
		}
	}

	void output(int i){
		dijkastra(1);
		int res = dis[city];
		if(res!=inf)
			printf("Case %d: %d\n",i,res);
		else{
			printf("Case %d: Impossible\n",i);
		}
	}
};


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		brush br;
		br.input();
		br.output(i);
	}
	return 0;
}
