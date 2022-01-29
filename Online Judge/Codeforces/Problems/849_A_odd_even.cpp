#include<iostream>
using namespace std;


int main(){
	int n,i,ara[103],res;
	cin>>n;

	for(i=0;i<n;i++){
		cin>>ara[i];
	}

	if(ara[0]%2==1 && ara[n-1]%2==1 && n%2==1){
		cout<<"Yes"<<endl;
	}

	else{
		cout<<"No"<<endl;
	}

	return 0;
}
