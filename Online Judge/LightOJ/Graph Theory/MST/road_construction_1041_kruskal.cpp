#include<bits/stdc++.h>
#include<string.h>
using namespace std;


struct vertex{
	string u,v;
	int w;

	bool operator<(const vertex &ob)const{
		return w<ob.w;
	}

}ver;


struct construction{
	int city,road;
	vector<vertex>vec;
	map<string,string>rep;
	set<string>st;


	void input(){
		//freopen("1041.txt","r",stdin);
		cin>>road;
		string city1,city2;
		int i,w;

		for(i=0;i<road;i++){
			cin>>city1>>city2>>w;;
			st.insert(city1);
			st.insert(city2);
			ver.u=city1;
			ver.v = city2;
			ver.w = w;
			vec.push_back(ver);
		}
	}

	string find(string r){
		string a = rep[r];
		if(a.compare(r)==0)
			return r;
		else{
			rep[r] = find(rep[r]);
			return rep[r];
		}
	}

	int kruskal(){
		int i,cost=0,cnt=0;
		city=st.size();

		set<string>::iterator itr;

		for(itr=st.begin();itr!=st.end();itr++){
			rep[*itr] = *itr;
		}

		sort(vec.begin(),vec.end());

		int l = vec.size();

		for(int i=0;i<l;i++){
			ver = vec[i];
			string u = find(ver.u);
			string v = find(ver.v);

			if(u.compare(v)!=0){
				rep[u]=v;
				cost+=ver.w;
				cnt++;
				if(cnt==city-1)
					break;
			}
		}

		return cost;
	}

	void output(int c){
		cout<<"Case "<<c<<": ";
		int flag=0;
		int cost = kruskal();

		set<string>::iterator itr;
		itr=st.begin();
		string obj = find(*itr);
		itr++;

		for(;itr!=st.end();itr++){
			string u = find(*itr);
			if(u.compare(obj)!=0){
				cout<<"Impossible"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<cost<<endl;
	}
};



int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		construction cn;
		cn.input();
		cn.output(i);
	}

	return 0;
}
