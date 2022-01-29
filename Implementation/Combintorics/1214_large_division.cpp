#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,i;
	double a,b,low,high,mid;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>a>>b;

		int flag =0;

		if(a<0)
			a*=(-1);
		if(b<0)
			b*=(-1);

		low = 0;
		high = pow(10,200);

		for(int cnt =1;cnt<2000;cnt++){
			mid = (low + high)/2;
			double x = mid*b;

			/*cout<<"High == "<<high<<endl;
			cout<<"mid == "<<mid<<endl;
			cout<<"low=="<<low<<endl;*/

			if(x==a){
				flag = 1;
				break;
			}

			else if(x<a){
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}

		if (flag==0){
			printf("Case %d: not divisible\n",i);
		}
		else{
			printf("Case %d: divisible\n",i);
		}

	}

	return 0;
}
