#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int main(){
	int t,i;
	double r1,r2,h,p,res;
	double pi = acos(-1);
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>r1>>r2>>h>>p;
		double r11 = (r1-r2)/h * p + r2;
		res = (r11*r11 + r11*r2 + r2*r2) * pi* p /3.0;
		printf("Case %d: %f\n",i,res);
	}

	return 0;
}

