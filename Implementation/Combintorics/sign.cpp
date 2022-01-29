#include<iostream>
using namespace std;

main(){

	int a = 2147483647 ;
	cout<<a<<endl;
	a = 2147483647 + 1;
	cout<<a<<endl;
	a = -2147483647 - 2147483647;
	cout<<a<<endl;
	a = 2147483647 + 2147483647;
	cout<<a<<endl;
}
