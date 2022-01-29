#include<bits/stdc++.h>
using namespace std;

#define SZ 10003
#define inf 10000000
#define nil -13


struct vertex{
	int v,w;

	bool operator<(const vertex &ob)const{
		return w<ob.w;
	}
}ver;

struct toll{
	int node,edge,src,des,p,mx;
	int dis_src[SZ];
	int dis_des[SZ];

	vector<vertex>vec[SZ];
	vector<vertex>trans[SZ];


	void input(){
		scanf("%d %d %d %d %d",&node,&edge,&src,&des,&p);
		int u,v,w,i;
		for(i=1;i<=edge;i++){
			scanf("%d %d %d",&u,&v,&w);
			ver.v=v;
			ver.w=w;
			vec[u].push_back(ver);
			ver.v=u;
			ver.w=w;
			trans[v].push_back(ver);
		}
	}

	void dijkastra_src(int src){
		int i;
		for(i=1;i<=node;i++){
			dis_src[i]=inf;
		}
		priority_queue<vertex>pq;
		vertex vt;

		dis_src[src]=0;
		ver.v=src;
		ver.w=0;

		pq.push(ver);

		while(!pq.empty()){
			ver = pq.top();
			pq.pop();
			int l = vec[ver.v].size();

			for(i=0;i<l;i++){
				vt = vec[ver.v][i];

				if(dis_src[ver.v] + vt.w < dis_src[vt.v]){
					dis_src[vt.v] = dis_src[ver.v] + vt.w;
					pq.push(vt);
				}
			}
		}

	}

	void dijkastra_des(int src){
		int i;
		for(i=1;i<=node;i++){
			dis_des[i]=inf;
		}
		priority_queue<vertex>pq;
		vertex vt;

		dis_des[src]=0;
		ver.v=src;
		ver.w=0;

		pq.push(ver);

		while(!pq.empty()){
			ver = pq.top();
			pq.pop();
			int l = trans[ver.v].size();

			for(i=0;i<l;i++){
				vt = trans[ver.v][i];

				if(dis_des[ver.v] + vt.w < dis_des[vt.v]){
					dis_des[vt.v] = dis_des[ver.v] + vt.w;
					pq.push(vt);
				}
			}
		}

	}

	int find_max(){
		int mx = -1;
		for(int i=1;i<=node;i++){
			int l = vec[i].size();
			for(int j=0;j<l;j++){
				ver = vec[i][j];
				if(dis_src[i] + dis_des[ver.v] + ver.w <=p && mx<ver.w){
					mx = ver.w;
				}
			}
		}

		return mx;
	}

	void output(int i){
		dijkastra_src(src);
		dijkastra_des(des);

		int mx = find_max();

		if(mx == -1){
			printf("Case %d: -1\n",i);
		}
		else{
			printf("Case %d: %d\n",i,mx);
		}
	}
};


int main(){
	//freopen("toll.txt","r",stdin);
	int t,i;
	scanf("%d",&t);

	for(i=1;i<=t;i++){
		toll tl;
		tl.input();
		tl.output(i);
	}
	return 0;
}
