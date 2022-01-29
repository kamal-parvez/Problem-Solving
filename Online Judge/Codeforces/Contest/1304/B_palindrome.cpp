#include<bits/stdc++.h>
using namespace std;


bool is_pali(string a, string b){
    int l = a.size();
    //cout<<a<<"  "<<b<<"  "<<l<<endl;
    for(int i=0; i<l; i++){
        //cout<<a[i]<<"  "<<b[l-i-1]<<endl;
        if(a[i] != b[l-1-i]){
            return false;
        }
    }
    return true;
}


int main(){
    int n, m;
    cin>>n>>m;
    string str[102];
    int visited[102];

    memset(visited, 0, sizeof(visited));

    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    /*for(int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }*/

    string first = "", last = "";

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            bool flag = is_pali(str[i], str[j]);
            //cout<<str[i]<<"  "<<str[j]<<endl;
            //cout<<flag<<endl;
            if(flag == true && (visited[j] == 0 && visited[i] == 0)){
                visited[i] = 1;
                visited[j] = 1;
                first += str[i];
                last = str[j] + last;
                //cout<<first<<" "<<last<<endl;
                break;
            }
        }
    }
    string middle = "";
    for(int i=0; i<n; i++){
        if(is_pali(str[i], str[i]) && visited[i] == 0){
            visited[i] = 1;
            middle = str[i];
            break;
        }
    }

    string res = first + middle + last;

    cout<<res.size()<<endl;
    cout<<res<<endl;

    return 0;
}

