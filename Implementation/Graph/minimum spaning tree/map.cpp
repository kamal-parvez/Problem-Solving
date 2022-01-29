#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;

map<string,string>mp;

string find(string r){
		string a = mp[r];
		if(a.compare(r)==0)
			return r;
		else{
			mp[r] = find(mp[r]);
			return mp[r];
		}
	}

int main(){
	/*map<int ,vector<int> >mp;
	mp[1].push_back(4);
	mp[3].push_back(9);
	mp[1].push_back(6);
	mp[3].push_back(4);
	mp[5].push_back(78);

	map<int ,vector<int> >::iterator itr;
	vector<int>::iterator vitr;

	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<endl;
			for(vitr = itr->second.begin();vitr != itr->second.end();vitr++){
				cout<<*vitr<<" ";
			}
			cout<<endl;
	}

	cout<<"Holo na"<<endl;*/



	string a = "dhaka";
	string b= "ctg",c="sylhet";

	mp[a]=a;
	mp[b]=b;
	mp[c]=a;

	cout<<mp[a]<<endl;
	cout<<mp[b]<<endl;
	cout<<mp[c]<<endl;

	set<string>st;
	st.insert("goru");
	st.insert("sagol");
	st.insert("gadha");

	set<string>:: iterator it;

	for(it=st.begin();it!=st.end();it++){
		cout<<*it<<endl;
		mp[*it]=*it;
	}

	cout<<"finished"<<endl;
	//cout<<mp["goru"]<<endl;

	cout<<find("goru")<<endl;
	mp["goru"]="sagol";
	cout<<find("goru")<<endl;

	set<int> kl;

	kl.insert(3);
	kl.insert(4);
	kl.insert(5);

	//cout<<kl[0]<<endl;



	return 0;
}


