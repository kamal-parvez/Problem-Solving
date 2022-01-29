#include<bits/stdc++.h>
using namespace std;


#define SZ 1000
#define White 1
#define Blue 2
#define Black 3

//white means edges are not included into mst
//blue means it's included into mst
//black means it will not be counted while 2nd best mst running


struct vertex
{
	int u,v,w;
	int color;

	bool operator<(const vertex &ob)const{
		return w<ob.w;
	}

}ver;


struct second_best{
	int node,edge,flag=0;
	vector<vertex>vec;
	vector<vertex>tree;
	int repres[SZ];

	void input(){
		//freopen("input_krus.txt","r",stdin);
		cin>>node>>edge;
		int i,u,v,w;

		for(i=0;i<edge;i++){
			cin>>u>>v>>w;
			ver.u=u;
			ver.v=v;
			ver.w=w;
			ver.color=White;//white means edges are not included into mst
			vec.push_back(ver);
		}
	}


	int find(int r){
		if(repres[r]==r)
			return r;

		else
			return find(repres[r]);
	}

	int kruskal()
	{
		int cost=0;
		int cnt=0;
		int i,j;

		for(i=0;i<node;i++){
			repres[i]=i;
		}

		sort(vec.begin(),vec.end());

		for(i=0;i<vec.size();i++){
			ver = vec[i];

			int u = find(ver.u);
			int v = find(ver.v);

			if(u!=v){
				repres[u]=v;
				cnt++;
				cost+=ver.w;
				//cout<<"hmm "<<vec[i].u<<" "<<vec[i].v<<" "<<vec[i].w<<endl;
				//tree.push_back(ver);

				if(cnt==node-1)
					break;
			}
		}

		return cost;
	}


	int spanning()
	{
		int cost=0;
		int cnt=0;
		int i,j;

		for(i=0;i<node;i++){
			repres[i]=i;
		}

		//sort(vec.begin(),vec.end());

		for(i=0;i<vec.size();i++){
			ver = vec[i];

			if(ver.color==Black)
				continue;

			int u = find(ver.u);
			int v = find(ver.v);

			if(u!=v){
				repres[u]=v;
				cnt++;
				cost+=ver.w;
				//cout<<"hmm "<<vec[i].u<<" "<<vec[i].v<<" "<<vec[i].w<<endl;

				if(cnt==node-1)
					break;
			}
		}

		return cost;
	}


	void sbest(){
		int mx = kruskal();
		int smax=INT_MAX;
		int flag=1;

		//cout<<"minimum spanning tree : "<<mx<<endl;

		for(int i=0;i<vec.size();i++){
				vec[i].color=Black;
				cout<<"bad "<<vec[i].u<<" "<<vec[i].v<<" "<<vec[i].w<<endl;
				int x = spanning();
				vec[i].color=Blue;

				cout<<x<<endl;

				if(smax>x && x>mx)
					smax=x;

		}


	cout<<smax<<endl;
	}

};

int main()
{
	second_best sb;
	sb.input();
	sb.sbest();

	return 0;
}

