#include<bits/stdc++.h>
using namespace std;

char a[1002];

void rev(int x){
    for(int i=0; i<=x/2; i++){
        swap(a[i], a[x-i]);
    }
    //cout<<a<<endl;
}

void ulta(int x){
    for(int i=0; i<=x; i++){
        if(a[i] == '0'){
            a[i] = '1';
        }
        else{
            a[i] = '0';
        }
    }
    //cout<<a<<endl;
}


int main(){
    int t;
    cin>>t;

    int n;

    char b[1002];

    while(t--){
        cin>>n;

        cin>>a;
        //ulta(4);
        //ulta(3);
        cin>>b;

        //cout<<a<<endl;
        //cout<<b<<endl;

        int cnt = 0;
        vector <int> vec;

        for(int i=n-1; i>=0; i--){
            if(b[i] == a[i]){
                continue;
            }
            else if(b[i] != a[0]){
                cnt++;
                //printf("1 : %d\n", i+1);
                vec.push_back(i+1);

                ulta(i);
                rev(i);
            }
            else{
                cnt++;
                ulta(0);
                //printf("2 : 1\n");
                vec.push_back(1);
                cnt++;
                //printf("2 : %d\n", i+1);
                vec.push_back(i+1);

                ulta(i);
                rev(i);
            }
        }

        printf("%d", cnt);
        if(cnt>0){
            printf(" ");
            int l = vec.size();
            for(int i=0; i<l; i++){
                printf("%d", vec[i]);
                if(i<l-1){
                    printf(" ");
                }
            }
        }
        cout<<endl;

    }
    return 0;
}

