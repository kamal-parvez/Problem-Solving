#include<iostream>
using namespace std;


int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case "<<i<<":"<<endl;
		int n;

		cin>>n;

		string str;
		int sum = 0;
		int donation;

		for(int j=1;j<=n;j++){
			cin>>str;

			if(str=="donate"){
				cin>>donation;
				sum += donation;
			}
			else{
				cout<<sum<<endl;
			}
		}
	}

	return 0;
}
