#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, x, m;
    int li, ri;

    int res;

    while(t--){
        cin>>n>>x>>m;
        res = 0;
        int lo = -1, hi = -1;

        for(int i=0; i<m; i++){
            cin>>li>>ri;

            //printf("li=%d  ri=%d   x=%d\n", li, ri, x);

            if(li<=x && ri>=x){
                if(lo == -1 || lo>li){
                    lo = li;
                }
                if(hi == -1 || hi<ri){
                    hi = ri;
                }
                //cout<<"aa"<<endl;
            }
            else if(lo != -1 && ri>=lo && li<lo){
                lo = li;
                //cout<<"BB"<<endl;
            }
            else if(hi !=-1 && li<=hi && ri>hi){
                hi = ri;
                //cout<<"CC"<<endl;
            }
            //printf("lo=%d   hi=%d\n", lo, hi);

        }
        cout<<hi-lo+1<<endl;

    }
    return 0;
}

