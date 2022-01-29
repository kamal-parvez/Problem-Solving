#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct web{
	stack < string> fs;
	stack < string > bs;
	string current = "http://www.lightoj.com/";

	void input(){
		string str;
		string add;
		while(1){
			cin>>str;
			if(str.compare("QUIT")==0){
				break;
			}

			else if(str.compare("BACK")==0){
				if(bs.empty()){
					cout<<"Ignored"<<endl;
				}
				else{
					fs.push(current);
					current = bs.top();
					bs.pop();
					cout<<current<<endl;
				}
			}

			else if(str.compare("FORWARD")==0){
				if(fs.empty()){
					cout<<"Ignored"<<endl;
				}
				else{
					bs.push(current);
					current = fs.top();
					fs.pop();
					cout<<current<<endl;
				}
			}

			else{
				cin>>add;
				bs.push(current);
				fs=stack<std::string>();
				current = add;
				cout<<current<<endl;
			}


		}
	}
};


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		printf("Case %d:\n",i);
		web net;
		net.input();
	}
}
