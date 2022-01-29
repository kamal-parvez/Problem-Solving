#include<stdio.h>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;




int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		string reminder = "";
		string a;
		int b;
		cin>>a;
		cin>>b;

		int l = a.size();
		string str="";

		long long int x;

		for(int j=0;j<l;j++){
			str = str + a[j];

			//cout<<"string=="<<str<<endl;

			stringstream geek(str);

			geek>>x;

			//cout<<"X=="<<x<<endl;

			long long int c=1;

			while(c!=0){
				c = x/b;
				x = x%b;
				//cout<<x<<endl;
			}

			stringstream ss;
			ss << x;
			str = ss.str();

			//cout<<str<<endl;
		}

		if(x==0){
			printf("Case %d: divisible\n",i);
		}
		else{
			printf("Case %d: not divisible\n",i);
		}

	}

	return 0;
}
