#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t){

        int a, b, x, y;
        cin>>a>>b>>x>>y;

        int area1 = max(x*b, (a-1-x)*b);
        int area2 = max(a*y, (b-1-y)*a);
        cout<<max(area1, area2)<<endl;
        t--;
    }
    return 0;
}
