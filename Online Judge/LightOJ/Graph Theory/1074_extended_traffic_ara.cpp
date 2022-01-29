#include<bits/stdc++.h>
using namespace std;

#define SZ 	203
#define inf 100000


struct belman{
	int node,road,query;
	int dis[SZ];
	int weight[SZ];
	//vector<edge>vec;
	int ara[SZ][SZ];

	void input(){
		scanf("%d",&node);
		int i,u,v,w,j;

		for(i=1;i<=node;i++){
			scanf("%d",&weight[i]);
		}

		for(i=1;i<=node;i++){
			for(j=1;j<=node;j++){
				ara[i][j]=inf;
			}
		}

		scanf("%d",&road);

		for(i=1;i<=road;i++){
			scanf("%d %d",&u,&v);
			w = weight[v]-weight[u];
			w = w*w*w;
			ara[u][v]=w;
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

		for(k=1;k<node;k++){
			for(i=1;i<=node;i++){
				for(j=1;j<=node;j++){

					if(dis[i]+ara[i][j]<dis[j] && ara[i][j]!=inf){
						dis[j] = dis[i] + ara[i][j];
					}
				}
			}
		}

		/*for(i=1;i<=node;i++){
			for(j=1;j<=node;j++){

				if(dis[i]+cost[i][j]<dis[j] && ara[i][j]!=inf){
					return;
				}
			}
		}*/

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
