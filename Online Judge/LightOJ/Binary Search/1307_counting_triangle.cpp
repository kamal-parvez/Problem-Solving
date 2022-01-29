#include<bits/stdc++.h>
using namespace std;


int n;
int ara[2002];


/*bool area(int a, int b, int c){
    double s = (a+b+c)/3.0;
    double temp = s * (s-a) * (s-b) * (s-c);
    cout<<a<<" "<<b<<" "<<c<<" "<<temp<<endl;
    if(temp > 0)
        return true;
    else
        return false;
}*/

bool area(int a, int b, int c){
    if(a+b>c && b+c>a && a+c>b)
        return true;

    return false;
}


int bin_search(int i, int j){
    int lo, mid, hi;
    lo = j+1;
    hi = n-1;

    int res = 0;

    while(lo<=hi){
        mid = (lo + hi)/2;

        if(area(ara[i], ara[j], ara[mid])){
            res = mid - j;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return res;
}


int main(){
    int test;
    cin>>test;

    for(int cases=1; cases<=test; cases++){

        cin>>n;
        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }

        sort(ara, ara+n);

        /*for(int i=0; i<n; i++){
            printf("%d ", ara[i]);
        }*/
        int res = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                res += bin_search(i, j);
            }
        }

        printf("Case %d: %d\n", cases, res);
    }
    return 0;
}
