#include<bits/stdc++.h>
#include<math.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	char dcml[50];
	char bnry[50];
	for(int i=1;i<=t;i++){
		cin>>dcml;
		cin>>bnry;
		int flag = 0;
		int k = 0;
		int l = 0;
		for(int j=1;j<=4;j++){
			int sum = 0;
			int ex = 7;
			while(bnry[k]!= '.'){
				if(bnry[k]=='1'){
					sum += pow(2,ex);
				}
				k++;
				ex--;
			}
			//cout<<"sum : "<<sum<<endl;
			int deci = 0;
			while(dcml[l]!= '.' && dcml[l]){
				int x =(int)dcml[l]-'0';
				deci = deci * 10 + x;
				l++;
				//cout<<"dec digit: "<<x<<endl;
			}
			//cout<<"decimal: "<<deci<<endl;

			if(deci != sum){
				flag = 1;
				break;
			}
			k++;
			l++;
		}

		if(flag==1)
			printf("Case %d: No\n",i);
		else
			printf("Case %d: Yes\n",i);
	}
	return 0;
}
