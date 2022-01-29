#include<bits/stdc++.h>
using namespace std;

struct greedy{
    int ar;
    int dep;

    bool operator<(const greedy &ob)const{
        return dep<ob.dep;
    }
}gr,anda;


int main(){
    freopen("train.txt","r",stdin);
    int n;
    cin>>n;
   // set<greedy>st;
   vector<greedy>vec;
   // double ar,dep;
    int m1,h1,m2,h2;

    for(int i=0;i<n;i++){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
       // cout<<"hour="<<h1<<"  minute="<<m1<<endl;
        gr.ar = h1*60 + m1;

       // cout<<"arival="<<gr.ar<<endl;

        //cout<<"hour="<<h2<<"  minute="<<m2<<endl;

        gr.dep = h2*60 + m2;
       // cout<<"dep="<<gr.dep<<endl;
        //st.insert(gr);
        vec.push_back(gr);
    }

    int cnt=1;
    int mx=0;
    sort(vec.begin(),vec.end());

    int j=0;

    for(int i=1; i<n;i++){
        if(vec[i].ar < vec[j].dep){
            cnt++;
        }

        else{
            if(mx<cnt){
                mx = cnt;
            }
            j=i;
        }

       // cout<<"I=="<<vec[i].ar<<"   "<<vec[i].dep<<endl;
        //cout<<"J=="<<vec[i].ar<<" "<<vec[i].dep<<endl;

    }

    cout<<mx<<endl;

    return 0;
}
