#include<bits/stdc++.h>
using namespace std;


void counting(char str[], int l, int cnt[]){
    for(int i=0; i<l; i++){
        if(str[i] != ' '){
            if(str[i] < 95)
                cnt[str[i] - 65]++;
            else
                cnt[str[i] - 97]++;
        }
    }
}


int main(){
    int t;
    scanf("%d", &t);
    char str1[102], str2[102];

    //cin.ignore(1, '\n');
    for(int i=1; i<=t; i++){
        scanf("\n");
        //cin.getline(str1, 103);
        //cin.ignore(1, '\n');
        scanf("%[^\n]s",str1);
        scanf("\n");
        scanf("%[^\n]s",str2);

        //cin.getline(str2, 103);
        //cout<<str1<<endl;
        //cout<<str2<<endl;

        int cnt1[26];
        int cnt2[26];
        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));

        counting(str1, strlen(str1), cnt1);
        counting(str2, strlen(str2), cnt2);

        //for(int j=0; j<26; j++){
          //  cout<<(char)('A'+ j) << "  "<<cnt1[j]<<"  "<<cnt2[j]<<endl;
        //}


        bool flag = true;
        for(int j=0; j<26; j++){
            if(cnt1[j] != cnt2[j]){
                flag = false;
                break;
            }
        }

        if(flag == true)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);

    }
    return 0;
}

