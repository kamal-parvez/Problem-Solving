#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;

    cout<<4<<endl;

    int l = str.size();

    int x = l + (l-2) + 1;
    x = x + (x-2);

    printf("R 2\n");
    printf("L 2\n");
    printf("R 2\n");
    printf("R %d\n", x-1);
    return 0;
}


