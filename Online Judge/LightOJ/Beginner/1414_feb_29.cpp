#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int leap(int year1, int year2, int div){
	int i = year1;
	int x = 0;
	while(i<=year2){
		if(i%div==0){
			x = 1;
			break;
		}
		i++;
	}
	year1 = i+1;

	int cnt = (year2 - year1 +1)/div;

	return cnt + x;
}


int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		char month1[20], month2[20];
		int day1,day2;
		int year1,year2;

		scanf("%s %d, %d",month1,&day1,&year1);
		scanf("%s %d, %d",month2,&day2,&year2);
		//printf("%s %d %d\n",month,day,year);
		int cnt = 0,a;
		/*int dif = year2 - year1 - 1;
		if(dif>0){
			a = (int)ceil((dif/4.0));
			cnt += a;
			cout<<cnt<<endl;
			if((year2-1)%4!=0 && (year1+1)%4!=0)
				cnt--;
			cout<<cnt<<endl;
			a = dif/100;
			cnt -=a;
			cout<<cnt<<endl;
			if((year2-1)%100!=0 && (year1+1)%100!=0)
				cnt++;
			cout<<cnt<<endl;
			a = dif/400.0;
			cnt += a;
			cout<<cnt<<endl;
			if((year2-1)%400!=0 && (year1+1)%400!=0)
				cnt--;
			cout<<cnt<<endl;
		}

		cout<<cnt<<endl;*/
		int dif = year2 - year1 - 1;
		if(dif>0){
			cnt += leap(year1+1, year2-1, 4);
			//cout<<cnt<<endl;
			cnt -= leap(year1+1, year2-1, 100);
					//cout<<cnt<<endl;
			cnt += leap(year1+1, year2-1, 400);
					//cout<<cnt<<endl;
		}

		if(year1!=year2){

			if((year1%4 == 0 && year1%100!=0) || year1%400==0){
				if(strcmp(month1,"January")==0 || strcmp(month1,"February")==0)
					cnt++;
			}

			if((year2%4 == 0 && year2%100!=0) || year2%400==0){
				if(strcmp(month2,"January")!=0 && strcmp(month2,"February")!=0)
					cnt++;
				if(strcmp(month2,"February")==0 && day2==29)
					cnt++;
			}
		}

		else{
			if((year1%4 == 0 && year1%100!=0) || year1%400==0){
				if(strcmp(month1,"January")==0 || strcmp(month1,"February")==0){
					if(strcmp(month2,"January")!=0 && strcmp(month2,"February")!=0)
						cnt++;
					if(strcmp(month2,"February")==0 && day2==29)
						cnt++;
				}

			}

		}
		printf("Case %d: %d\n",i,cnt);

	}
	return 0;
}
