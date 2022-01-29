#include<iostream>
#include<deque>
using namespace std;

void operation(int n,int m){
	deque<int>deq;
	string str;
	int x,cnt=0;
	for(int i=1;i<=m;i++){
		cin>>str;
		if(str.compare("pushLeft")==0){
			cin>>x;
			if(cnt<n){
				deq.push_front(x);
				cout<<"Pushed in left: "<<x<<endl;
				cnt++;
			}
			else
				cout<<"The queue is full"<<endl;

		}
		else if(str.compare("pushRight")==0){
			cin>>x;
			if(cnt<n){
				deq.push_back(x);
				cout<<"Pushed in right: "<<x<<endl;
				cnt++;
			}
			else
				cout<<"The queue is full"<<endl;
		}
		if(str.compare("popLeft")==0){
			if(cnt==0){
				cout<<"The queue is empty"<<endl;
			}
			else{
				int u = deq.front();
				deq.pop_front();
				cout<<"Popped from left: "<<u<<endl;
				cnt--;
			}
		}
		if(str.compare("popRight")==0){
			if(cnt==0){
				cout<<"The queue is empty"<<endl;
			}
			else{
				int v = deq.back();
				deq.pop_back();
				cout<<"Popped from right: "<<v<<endl;
				cnt--;
			}
		}
	}
}


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int n,m;
		cin>>n>>m;
		cout<<"Case "<<i<<":"<<endl;
		operation(n,m);
	}

	return 0;
}
