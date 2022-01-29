#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,i;
	double res;
	cin>>n;

	for(i=1;i<=n;i++){
		res+=log10(i);
	}

	int abc =(int) floor(res);

	cout<<abc+1<<endl;

	return 0;
}
