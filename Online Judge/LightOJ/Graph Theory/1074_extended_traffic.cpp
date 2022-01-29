#include<bits/stdc++.h>
using namespace std;

#define SZ 	203
#define inf 100000

struct edge{
	int u,v,w;
}ed;


struct belman{
	int node,road,query;
	int dis[SZ];
	int weight[SZ];
	vector<edge>vec;

	void input(){
		scanf("%d",&node);
		int i,u,v,w;

		for(i=1;i<=node;i++){
			scanf("%d",&weight[i]);
		}

		scanf("%d",&road);

		for(i=1;i<=road;i++){
			scanf("%d %d",&u,&v);
			ed.u = u;
			ed.v = v;
			w = weight[v]-weight[u];
			ed.w = w*w*w;
			vec.push_back(ed);
		}

		output();
	}

	void output(){

		traffic(1);

		int i;

		/*cout<<"Distance*** ";

		for(i=1;i<=node;i++){
			cout<<dis[i]<<" ";
		}
		cout<<endl;*/

		scanf("%d",&query);
		int des;

		for(i=1;i<=query;i++){
			scanf("%d",&des);

			if(dis[des]<3 || dis[des]==inf)
				printf("?\n");
			else
				printf("%d\n",dis[des]);
		}
	}


	void traffic(int src){

		int i,j,k;

		for(i=1;i<=node;i++)
			dis[i]=inf;

		dis[src]=0;

		int l = vec.size();

		for(k=1;k<node;k++){

			for(i=0;i<l;i++){
				ed = vec[i];

				if(dis[ed.u] + ed.w < dis[ed.v]){
					dis[ed.v] = dis[ed.u] + ed.w;
				}
			}
		}

		for(i=0;i<l;i++){
			ed = vec[i];

			if(dis[ed.u] + ed.w < dis[ed.v]){
				return;
			}
		}

	}

};


int main(){
	//freopen("1074.txt","r",stdin);
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		belman bl;
		printf("Case %d:\n",i);
		bl.input();
	}

	return 0;
}
