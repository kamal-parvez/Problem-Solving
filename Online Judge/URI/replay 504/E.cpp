#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ara[100000];

    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }

    long long int b_cnt =0, m_cnt = 0;

    long long int mx = 0;

    b_cnt = ara[0];
    m_cnt = ara[n-1];

    int i = 0, j = n-1;

    while(i<j){
        if(b_cnt == m_cnt){
            mx += b_cnt;
            i++;
            j--;
            b_cnt = ara[i];
            m_cnt = ara[j];
        }
        else if(b_cnt > m_cnt){
            j--;
            m_cnt += ara[j];
        }
        else if(b_cnt < m_cnt){
            i++;
            b_cnt += ara[i];
        }
    }

    cout<<mx<<endl;

    return 0;
}
