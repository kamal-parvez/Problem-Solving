#include<bits/stdc++.h>
using namespace std;

#define white 1
#define black 2
#define grey 3


/*struct vertex{
	string c1,c2;
}ver;*/

struct drunk{
	int node,edge;
	bool cy=false;
	map < string, vector<string> > mp;
	map<string,int>color;
	set<string>st;

	void input(){
		cin>>edge;
		int i;
		string u,v;

		for(i=0;i<edge;i++){
			cin>>u>>v;
			st.insert(u);
			st.insert(v);
			mp[u].push_back(v);
		}
	}

	void cycle(){
		int i;
		node=st.size();
		set<string>::iterator it;
		for(it=st.begin();it!=st.end();it++){
			color[*it] = white;
		}

		for(it=st.begin();it!=st.end();it++){
			if(color[*it] = white){
				dfs(*it);
			}
		}
	}

	void dfs(string u){
		color[u]=grey;

		for(int i=0;i<mp[u].size();i++){
			string v = mp[u][i];

			if(color[v]==white){
				dfs(v);
			}
			else if(color[v]==grey){
				cy=true;
			}
		}

		color[u]=black;

	}


	void output(int i){
		cycle();

		if(cy==false){
			printf("Case %d: Yes\n",i);
		}
		else{
			printf("Case %d: No\n",i);
		}
	}
};


int main(){
	int t,i;
	cin>>t;

	for(i=1;i<=t;i++){
		drunk dr;
		dr.input();
		dr.output(i);
	}
	return 0;
}
