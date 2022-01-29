#include<iostream>
using namespace std;


int main(){
	int t,i,x1,x2,y1,y2;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>x1>>y1>>x2>>y2;
		int m,u,v;
		cin>>m;
		cout<<"Case "<<i<<":"<<endl;
		for(int j=1;j<=m;j++){
			cin>>u>>v;
			//cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
			//cout<<u<<" "<<v<<endl;
			if(u>=x1 && u<=x2 && v>=y1 && v<=y2)
				cout<<"Yes"<<endl;

			else
				cout<<"No"<<endl;
		}
	}

	return 0;
}
