#include<bits/stdc++.h>
using namespace std;


struct edge{
	int u,v,w;

	bool operator<(const edge &ob)const{
		if(w==ob.w){
			if(u==ob.u){
				return v<ob.v;
			}
			else{
				return u<ob.u;
			}
		}
		else
			return w<ob.w;
	}
}edg;

struct tiger{
	int field,week;
	set<edge>st;
	int rep[202];

	void input(){
		//cin>>field>>week;
		scanf("%d %d",&field,&week);
		int i,u,v,w;

		for(i=1;i<=week;i++){
			//cin>>u>>v>>w;
			scanf("%d %d %d",&u,&v,&w);
			edg.u=u;
			edg.v=v;
			edg.w=w;
			st.insert(edg);

			//if(i<field-1)
			//	cout<<"-1"<<endl;
			//else
			output(u);
		}
	}

	int find(int r){
		if(rep[r]==r)
			return r;
		else{
			rep[r]=find(rep[r]);
			return rep[r];
		}
	}

	int kruskal(){
		int cnt=0,cost=0,i;

		for(i=1;i<=field;i++){
			rep[i]=i;
		}

		int l = st.size();
		set<edge>::iterator  it;
		it=st.begin();

		for(i=0;i<l;it++,i++){

			int u = find(it->u);
			int v = find(it->v);

			if(u!=v){
				rep[u]=v;
				cost+= it->w;
				cnt++;

				if(cnt==field-1)
					break;
			}
		}

		return cost;
	}

	void output(int u){
		int cost = kruskal();

		int i,r,flag=1;
		r = find(u);

		for(i=1;i<=field;i++){
			int a = find(i);

			if(a!=r){
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("%d\n",cost);
		else
			printf("-1\n");
	}
};


int main(){

	//freopen("1123.txt","r",stdin);
	int t,i;
	//cin>>t;
	scanf("%d",&t);

	for(i=1;i<=t;i++){
		printf("Case %d:\n",i);
		tiger trail;
		trail.input();
	}
}
