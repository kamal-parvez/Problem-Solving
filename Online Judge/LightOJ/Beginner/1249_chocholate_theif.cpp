#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;

struct students{
	char name[30];
	int length,width,height;
};


int main(){
	int t;
	cin>>t;

	students student[102];

	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int l,h,w;
		for(int j=0;j<n;j++){
			//scanf("%s %d %d",student[j].name,&student[j].length,&student[j].width,&student[j].height);
			cin>>student[j].name>>student[j].length>>student[j].width>>student[j].height;
		}

		int mx = -1;
		int mn = 10000000;
		int theif;
		int victim;
		set<int>st;

		for(int j=0;j<n;j++){
			int volume = student[j].length * student[j].width * student[j].height;
			st.insert(volume);

			if(volume>mx){
				mx = volume;
				theif = j;
			}
			if(volume<mn){
				mn = volume;
				victim = j;
			}
		}


		if(st.size()==1){
			printf("Case %d: no thief\n",i);
		}
		else{
			printf("Case %d: %s took chocolate from %s\n",i,student[theif].name,student[victim].name);
		}
	}

	return 0;
}
