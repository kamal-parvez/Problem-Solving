#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	getchar();
	for(int i=1;i<=t;i++){
		char str1[200];
		char str2[200];
		//cout << "Enter 1st::";

		// see the use of getline() with array
		// str also replace the above statement
		// by cin >> str and see the difference
		// in output
		cin.getline(str1, 200,'\n');
		// cout << "Enter 2nd::";
		cin.getline(str2, 200);


		cout << "\nYour Name is:: " << str1<<endl;
		cout << "\nYour Name is:: " << str2<<endl;
		//getchar();
    }
    return 0;
}
