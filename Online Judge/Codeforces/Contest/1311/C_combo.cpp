#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;

    char str[200001];
    int pos[200001];
    int cnt[26];


    while(t){

        int n, m;
        //cin>>n>>m;
        scanf("%d %d", &n, &m);

        //cin>>str;
        scanf("%s", str);
        for(int i=0; i<m; i++){
            //cin>>pos[i];
            scanf("%d", &pos[i]);
        }

        memset(cnt, 0, sizeof(cnt));

        pos[m] = n;

        for(int i=0; i<=m; i++){
            for(int j=0; j<pos[i]; j++){
                int x = (int) (str[j] - 'a');
                //cout<<"x : "<<x<<endl;
                cnt[x]++;
            }
        }

        for(int i=0; i<26; i++){
            //cout<<cnt[i];
            printf("%d", cnt[i]);
            if(i<25)
                printf(" ");
        }
        printf("\n");

        t--;
    }
    return 0;
}


