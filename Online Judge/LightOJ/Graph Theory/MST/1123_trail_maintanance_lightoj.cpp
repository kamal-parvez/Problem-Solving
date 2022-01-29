#include<bits/stdc++.h>
using namespace std;

//prim algo diye korte hobe
#define SZ 202


struct priority{
	int u,v,w;

	bool operator<(const priority & ob)const{
		return w>ob.w;
	}
}pr;

struct vertex{
	int v,w;
}ver;


struct tiger{
	int field,week;
	bool vis[SZ];
	vector<vertex>vec[SZ];
	priority_queue<priority>pq;

	void input(){
		cin>>field>>week;
		int i,u,v,w;

		for(i=1;i<=week;i++){
			cin>>u>>v>>w;
			ver.v=v;
			ver.w=w;
			vec[u].push_back(ver);
			ver.v=u;
			vec[v].push_back(ver);

			if(i<field-1)
				cout<<"-1"<<endl;

			else{
				initialize();
				output(u);
			}
		}
	}

	void initialize(){
		for(int i=1;i<=field;i++){
			vis[i]=false;
		}
	}

	int prims(int u){
		vis[u]=true;
		int i,l;
		l = vec[u].size();

		for(i=0;i<l;i++){
			ver = vec[u][i];

			if(vis[ver.v]==true)
				continue;

			pr.u=u;
			pr.v= ver.v;
			pr.w=ver.w;

			pq.push(pr);
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

	void output(int u){
		int cost = prims(u);
		int flag=1;

		for(int i=1;i<=field;i++){
			if(vis[i]==false){
				flag=0;
				break;
			}
		}

		if(flag==1){
			cout<<cost<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
};


int main(){
	//freopen("1123.txt","r",stdin);
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		printf("Case %d:\n",i);
		tiger trail;
		trail.input();
	}
}
