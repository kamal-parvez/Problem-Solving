#include<bits/stdc++.h>
using namespace std;


//kruskal diye korsi

struct edges{
	int u,v,w;
	bool vis;

	bool operator<(const edges &ob)const{
		return w<ob.w;
	}
}edg;


struct airports{
	int location,roads,airport_cost;
	vector<edges>vec;
	int rep[100009];

	void input(){
		cin>>location>>roads>>airport_cost;
		int u,v,w;

		for(int i=0;i<roads;i++){
			cin>>u>>v>>w;
			edg.u=u;
			edg.v=v;
			edg.w=w;
			edg.vis = false;

			vec.push_back(edg);
		}
	}

	int find(int r){
		if(rep[r]==r)
			return r;

		rep[r]=find(rep[r]);
		return rep[r];
	}

	int kruskal(){
		int i,cost=0,cnt=0;

		for(i=1;i<=location;i++){
			rep[i]=i;
		}

		sort(vec.begin(),vec.end());

		int l = vec.size();

		for(i=0;i<l;i++){
			edg = vec[i];
			int u = find(edg.u);
			int v = find(edg.v);

			if(u!=v){
				rep[u]=v;
				cnt++;
				cost+=edg.w;

				vec[i].vis = true;

				if(cnt==location-1)
					break;
			}
		}

		return cost;
	}

	void output(int c){
		cout<<"Case "<<c<<": ";

		int road_cost = kruskal();

		set<int>st;

		for(int i=1;i<=location;i++){
			int r = find(i);
			st.insert(r);
		}

		int airport = st.size();

		int total_cost = road_cost + airport*airport_cost;

		//cout<<"total cost = "<<total_cost<<endl;

		int l = vec.size();
		reverse(vec.begin(),vec.end());

		for(int i=0;i<l;i++){
			edg = vec[i];
			if(edg.vis==true){
				int cost=total_cost - edg.w + airport_cost;
				if(cost<=total_cost){
					total_cost = cost;
					airport++;
				}
				else
					break;
				//cout<<"total cost = "<<total_cost<<endl;
			}
		}

		cout<<total_cost<<" "<<airport<<endl;
	}
};


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		airports air;
		air.input();
		air.output(i);
	}

	return 0;
}
