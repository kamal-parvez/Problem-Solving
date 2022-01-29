#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a, b, c, d;
    int x, y, x1, y1, x2, y2;

    while(t){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);

        bool flag = true;

        if(a==b && a>0 && (x==x1 && x==x2)){
            flag = false;
        }
        if(c==d && c>0 && y==y1 && y==y2){
            flag = false;
        }


        if(a>=b){
            if((a-b) > (x-x1)){
                flag = false;
            }
        }
        if(a<b){
            if((b-a) > (x2-x)){
                flag = false;
            }
        }
        if(c>=d){
            if((c-d) > (y-y1)){
                flag = false;
            }
        }
        if(c<d){
            if((d-c) > (y2-y)){
                flag = false;
            }
        }

        if(flag == true)
            printf("Yes\n");
        else
            printf("No\n");


        t--;
    }
    return 0;
}
