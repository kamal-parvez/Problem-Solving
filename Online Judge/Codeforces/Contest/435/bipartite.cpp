#include<bits/stdc++.h>
using namespace std;

#define green 1
#define blue 2
#define white 3

vector<int>vec[100002];
int node;
int color[100002];


void bipartite(int src){
	int i;
	for(i=1;i<=node;i++){
		color[i]=white;
	}
	color[src]=green;
	queue<int>q;

	q.push(src);

	while(!q.empty()){
		int u = q.front();
		q.pop();

		for(int j=0;j<vec[u].size();j++){
			int v = vec[u][j];

			if(color[v]==white){
				if(color[u]==green){
					color[v]=blue;
				}
				else{
					color[v]=green;
				}
				q.push(v);
			}
		}
	}
}


int edge(){
	int cnt1=0,cnt2=0;
	for(int i=1;i<=node;i++){
		if(color[i]==green){
			cnt1++;
		}
		else{
			cnt2++;
		}

		//cout<<color[i]<<endl;
	}
	int cnt = 0;

	for(int i=1;i<=node;i++){
		if(color[i]==green){
			int u = vec[i].size();
			cnt += (cnt2-u);
		}
	}
	return cnt;
}

int main(){
	int i,u,v;
	cin>>node;
	for(i=1;i<node;i++){
		cin>>u>>v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	bipartite(1);
	int res = edge();
	cout<<res<<endl;

	return 0;
}
