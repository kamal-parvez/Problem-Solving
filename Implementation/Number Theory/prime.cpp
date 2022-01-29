#include<bits/stdc++.h>
using namespace std;


struct Digits{
    int ara[10];
    int sz;
};



Digits split_digit(int num){
    int i=0;
    Digits dgt;
    while(num){
        dgt.ara[i] = num%10;
        num /= 10;
        i++;
    }
    dgt.sz = i;

    return dgt;
}


void show_digit(Digits dgt){
    printf("The Digits are : ");
    for(int i=0; i<dgt.sz; i++){
        printf("%d  ", dgt.ara[i]);
    }
    cout<<endl;
}


int form_num(Digits dgt){
    int num = 0;
    for(int i=0; i<dgt.sz; i++){
        num = num * 10 + dgt.ara[i];
    }
    return num;
}


bool check_prime(int num){
    bool flag = false;
    int sq = sqrt(num);

    for(int i= 2; i<= sq; i++){
        if(num%i==0){
            flag = true;
            break;
        }
    }
    return flag;
}



int main(){
    int num = 13;
    Digits dgt = split_digit(num);
    show_digit(dgt);
    sort(dgt.ara, dgt.ara+dgt.sz);
    show_digit(dgt);

    do{
        show_digit(dgt);
        printf("The Number : %d\n", form_num(dgt));

        if(check_prime(form_num(dgt))){
            printf("%d is not prime\n", form_num(dgt));
        }
        else{
            printf("%d is prime\n", form_num(dgt));
        }
    }while(next_permutation(dgt.ara, dgt.ara+dgt.sz));

    return 0;
}
