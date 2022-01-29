#include<bits/stdc++.h>
using namespace std;

double ara[20][20];
int m;


int gauss(){


    for(int i=0; i<m-1; i++){

       /* int x = ara[i][i];
        for(int j=i; j<m; j++){
            ara[i][j] /= x;
        }*/
        if(ara[i][i] == 0){
            for(int j=m-1; j>i; j--){
                if(ara[j][i] !=0){
                    for(int k=0; k<m; k++){
                        swap(ara[j][k], ara[i][k]);
                    }
                }
            }
        }

        for(int j=i+1; j<m; j++){

            if(ara[j][i] == 0){
                continue;
            }

            double x = (ara[j][i] * 1.0) / ara[i][i];
            x *= (-1);

            for(int k=i; k<m; k++){
                ara[j][k] = ara[i][k] * x + ara[j][k];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }

    double det = 1;
    for(int i=0; i<m; i++){
        det *= ara[i][i];
    }

    return det;
}


int main(){
    cin>>m;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>ara[i][j];
        }
    }

    cout<<"The determinant is : "<<gauss()<<endl;;
    int a = (int)'.';
    cout<<a<<endl;

    set<string> st;
    st.insert("ami");
    st.insert("ami");
    st.insert("tumi");

    cout<<st.size()<<endl;

    return 0;
}

