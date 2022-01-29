#include<bits/stdc++.h>
using namespace std;

#define SZ 1002

struct edge{
	int v,w;
}edg;

struct priority{
	int u,v,w;

	bool operator<(const priority &ob)const{
		return w>ob.w;
	}

}pr;


struct teleport{
	int city,road,src;
	bool vis[SZ];
	//int ara[SZ][SZ];
	priority_queue<priority>pq;
	vector<edge>vec[SZ];

	void input(){
		//memset(ara,-1,sizeof(ara));
		scanf("%d %d %d",&city,&road,&src);
		int i,u,v,w;
		for(i=1;i<=road;i++){
			scanf("%d %d %d",&u,&v,&w);
			//ara[u][v]=w;
			edg.v=v;
			edg.w=w;

			vec[u].push_back(edg);
		}
	}

	int prims(int u){
		vis[u]=true;
		int i;
		int l = vec[u].size();
		for(i=0;i<l;i++){
			edg = vec[u][i];
			if(vis[edg.v]==false){
				pr.u=u;
				pr.v=edg.v;
				pr.w=edg.w;
				pq.push(pr);
			}
		}

		while(1){
			if(pq.empty())
				return 0;
			pr = pq.top();
			pq.pop();

			if(vis[pr.v]==false)
				break;
		}

		return pr.w + prims(pr.v);
	}

	void output(int cse){
		for(int i=0;i<city;i++)
			vis[i]=false;

		int cost = prims(src);
		int flag=1;

		for(int i=0;i<city;i++){
			if(vis[i]==false){
				flag=0;
				break;
			}
		}


		//if(city==1)
			//printf("Case %d: 0\n",cse);
		if(flag==0)
			printf("Case %d: impossible\n",cse);
		else
			printf("Case %d: %d\n",cse,cost);
	}
};


int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		teleport tl;
		tl.input();
		tl.output(i);
	}

	return 0;
}
