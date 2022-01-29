#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, g, b;
    int red[202];
    int green[202];
    int blue[202];

    cin>>r>>g>>b;
    for(int i=0; i<r; i++){
        cin>>red[i];
    }

    for(int i=0; i<g; i++){
        cin>>green[i];
    }

    for(int i=0; i<b; i++){
        cin>>blue[i];
    }

    sort(red, red+r, greater<int>());
    sort(green, green+g, greater<int>());
    sort(blue, blue+b, greater<int>());

    long long int res = 0;
    int i=0;
    int j=0;
    int k=0;

    while(1){
        if((i==r && j==g) || (i==r && k==b) || (j==g && k==b)){
            break;
        }
        if(i==r && j!=g && k!=b){
            res += (green[j]*blue[k]);
            j++;
            k++;
            continue;
        }
        else if(j==g && i!=r && k!=b){
            res += (red[i]*blue[k]);
            i++;
            k++;
            continue;
        }
        else if(i==b && j!=g && i!=r){
            res += (red[i]*green[j]);
            i++;
            j++;
            continue;
        }

        if(red[i] >= green[j] && blue[k]>=green[j]){
            res += (red[i]*blue[k]);
            i++;
            k++;
        }
        else if(red[i] >= blue[k] && green[j]>=blue[k]){
            res += (red[i]*green[j]);
            i++;
            j++;
        }
        else if(green[j] >= red[i] && blue[k]>=red[i]){
            res += (green[j]*blue[k]);
            j++;
            k++;
        }
    }

    cout<<res<<endl;


    return 0;
}
