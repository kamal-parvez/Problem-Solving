#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;


int main(){
	int t;
	cin>>t;

	for(int i=1;i<=t;i++){
		int n;
		cin>>n;

		int nose;
		set<int>st;

		for(int j=1;j<=n;j++){
			cin>>nose;
			st.insert(nose);
		}

		int res = st.size() - 1;

		printf("Case %d: %d\n",i,res);
	}

	return 0;
}

