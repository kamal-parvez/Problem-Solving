#include<iostream>
using namespace std;

int n;

void pr1(int i){
	if(i==n-1){
		printf("int %c ) {\n",'a'+i);
		return;
	}

	printf("int %c, ",'a'+i);
	pr1(i+1);
}

void pr2(int i){

}

void func(int n){
	printf("void print( ");
	print(0);
	printf("printf( \"");
}





int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		printf("Case %d:\n",i);
		func();
	}

	return 0;
}
