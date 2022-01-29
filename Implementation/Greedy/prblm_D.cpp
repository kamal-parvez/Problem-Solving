#include<bits/stdc++.h>
using namespace std;


/*typedef pair<int,int>PIT;

vector<PIT>a;
vector<PIT>b;

bool cmp(PIT a, PIT b){
	return a.first<b.first;
}*/


int main(){
	int n;
	cin>>n;
	int x,y;
	int a[1000],b[1000];

	for(int i=0;i<n;i++){
		//cin>>x;
		//a.push_back(PIT(x,i));
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		//cin>>x;
		//b.push_back(PIT(x,i));
		cin>>b[i];
	}

	//sort(a.begin(),a.end(),cmp);
	//sort(b.begin(),b.end(),cmp);
	sort(a,a+n);
	sort(b,b+n);

	int sum=0;

	for(int i=0;i<n;i++){
		sum += abs(a[i] - b[i]);
	}

	cout<<sum<<endl;

	return 0;
}
