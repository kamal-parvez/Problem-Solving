#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

void fun(int neu,int den){
	if(neu==0 || den==0){
		return;
	}

	if(neu%den==0){
		cout<<neu/den;
		return;
	}

	if(den%neu==0){
		cout<<"1/"<<den/neu;
		return;
	}

	if(neu>den){
		cout<<neu/den<<" + ";
		fun(neu%den,den);
	}

	int x = den/neu +1;
	cout<<"1/"<<x<<" + ";
	fun(neu*x-den,den*x);
}


int main(){
	int den,neu;
	while(1){
		scanf("%d/%d",&neu,&den);

		if(den==0)break;

		fun(neu,den);
		cout<<endl;
	}

	return 0;
}
