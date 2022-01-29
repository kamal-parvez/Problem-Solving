#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;

void make_upper(char str[]){
	for(int i=0; str[i]; i++){
		if(str[i]>'Z'){
			str[i] -= 32;
		}
	}
}


int main(){
	int t;
	//scanf("%d",&t);
	cin>>t;
	char str1[100];
	char str2[100];
	//string str1;
	//string str2;
	getchar();

	for(int i=1;i<=t;i++){

		scanf ("%[^\n]%*c", str1);
       // printf ("%s\n", str1);

        scanf ("%[^\n]%*c", str2);
       // printf ("%s\n", str2);
		//char c = getchar();
		//cin.getline(str2,sizeof(str2));
		//gets(str1);
		//char c = getchar();
		//gets(str2);

		make_upper(str1);
		make_upper(str2);
		cout<<str1<<endl;
		cout<<str2<<endl;

		map < char, int >mp;

		for(int j=0;str1[j];j++){
			if(str1[j]!= ' ')
				mp[str1[j]]++;
		}

		map < char, int >::iterator it;
		for(it=mp.begin();it!=mp.end();it++){
			cout<<it->first<<"  "<<it->second<<endl;
		}

		for(int j=0;str2[j];j++){
			if(str2[j]!= ' '){
				mp[str2[j]]--;
				//cout<<str2[j]<<"  "<<mp[st]
			}
		}

		//map < char, int >::iterator it;
		int flag = 0;

		for(it=mp.begin();it!=mp.end();it++){
			cout<<it->first<<it->second<<endl;
			if(it->second != 0){
				flag = 1;
			}
		}

		if(flag==0){
			printf("Case %d: Yes\n",i);
		}
		else{
			printf("Case %d: No\n",i);
		}
	}
	return 0;
}



