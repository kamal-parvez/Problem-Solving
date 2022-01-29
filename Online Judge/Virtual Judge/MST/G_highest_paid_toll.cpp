#include<bits/stdc++.h>
using namespace std;


struct Edges{
	int u,v,w;

	bool operator<(const Edges &ob)const{
		return w<ob.w;
	}
}ed;


struct toll{
	int node,edge,src,des,taka;
	vector<Edges>vec;
	priority_queue<Edges>pq;

	void input(){
		cin>>node>>edge>>src>>des>>taka;
		int u,v,w;
		for(int i=0;i<edge;i++){
			cin>>u>>v>>w;
			ed.u=u;
			ed.v=v;
			ed.w=w;
			vec.push_back(ed);
		}
	}


}
