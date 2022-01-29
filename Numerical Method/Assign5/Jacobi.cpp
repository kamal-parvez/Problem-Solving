#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

#define MAX 50
#define ITR 6


void display_solution();
bool is_char(char x);
bool is_operator(char x);
bool is_minus(char x);
double convert_to_float(string coef);
void jacobi();
void display_solution();
void display_matrix();
void matrix_form();
void variable_parsing(string str, int equ_no);
void parsing(string str, int equ_no);




double sol_ara[MAX][ITR+1];
double const_ara[MAX];
double coef_ara[MAX][MAX];
map <pair<string, int>, double> var_to_coef;
map <string, int> var_to_in;
map <int, string> in_to_var;
set <string> st;
int mat_size;


bool is_char(char x){
    if((x>='A' && x<='Z') || (x>='a' && x<='z'))
        return true;
    else
        return false;
}

bool is_operator(char x){
    if(x == '+' || x == '-' || x == '=')
        return true;
    else
        return false;
}

bool is_minus(char x){
    if(x == '-')
        return true;
    else
        return false;
}

double convert_to_float(string coef){
    char ch[20];
    if(coef != ""){
        for(int i=0; i<coef.size(); i++){
            ch[i] = coef[i];
        }
    }
    else{
        ch[0] = '1';
    }

    return atof(ch);
}


void display_matrix(){
    for(int i=0; i<mat_size; i++){
        for(int j=0; j<mat_size; j++){
            printf("%.3f   ", coef_ara[i][j]);
        }
        cout<<endl;
    }
}

void matrix_form(){
    map <pair<string, int>, double> :: iterator it;
    int var_no = 0;

    for(it=var_to_coef.begin(); it!=var_to_coef.end(); it++){

        //cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
        st.insert(it->first.first);
    }

    mat_size = st.size();
    set<string>::iterator it1;

    for(it1=st.begin(); it1!=st.end(); it1++){
        var_to_in[*it1] = var_no;
        var_no++;
    }

    for(it=var_to_coef.begin(); it!=var_to_coef.end(); it++){
        coef_ara[it->first.second][var_to_in[it->first.first]] = it->second;
    }
}


void variable_parsing(string str, int equ_no){
    //cout<<str<<" "<<equ_no<<endl;

    int sign = 1;
    if(is_minus(str[0])) sign =-1;
    int i = 0;
    int length = str.size();
    string coef = "";
    string var = "";

    if(str == "=" || str == "")return;

    if(str[0] == '='){

        if(is_minus(str[1]))sign = -1;

        while(i < length){
            if(is_operator(str[i])){
                    i++;
                    continue;
            }
            coef += str[i];
            i++;
        }

        double val = convert_to_float(coef);
        val *= sign;
        const_ara[equ_no] = val;
    }
    else{
        while(is_char(str[i]) == false && i<length){

            if(is_operator(str[i])){
                    i++;
                    continue;
            }
            coef += str[i];
            i++;
        }

        while(i<length){
            var += str[i];
            i++;
        }

        double val = convert_to_float(coef);
        val *= sign;

        var_to_coef[make_pair(var, equ_no)] = val;
    }

}

void parsing(string str, int equ_no){

    string temp = "";
    int length = str.size();

    for(int i=0; i<length; i++){
        if(is_operator(str[i])){
                 //cout<<"ami"<<endl;
            variable_parsing(temp, equ_no);
            temp = "";
            temp += str[i];
        }

        else if(str[i] == ' ')
            continue;
        else{
            temp += str[i];
        }
    }


    if(temp[0] != '=')
        temp = '=' + temp;
    variable_parsing(temp, equ_no);
}


void display_solution(){
    set<string>::iterator it;
    it=st.begin();

    for(int i=0; i<mat_size; i++, it++){
        cout<<*it<<" =";
        for(int j=0; j<=ITR; j++){
            if(sol_ara[i][j]>0)
                printf("   %.6f", sol_ara[i][j]);
            else
                printf("  %.6f", sol_ara[i][j]);
        }
        cout<<endl;
    }
}


void jacobi(){

    for(int k = 1; k <= ITR; k++){
        for(int i = 0; i < mat_size; i++){
            sol_ara[i][k] = const_ara[i];

            for(int j = 0; j < mat_size; j++){
                if(j == i)
                    continue;
                sol_ara[i][k] -= (coef_ara[i][j] * sol_ara[j][k-1]);
            }

            sol_ara[i][k] /= coef_ara[i][i];
        }
    }
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    int equ_no = 0;

    cout<<"The equations are: ---"<<endl;
    while( getline(cin,str) && !str.compare("0") == 0){
        cout<<str<<endl;
        parsing(str, equ_no);
        equ_no++;
    }

    matrix_form();

    cout<<endl;
    cout<<"The Coefficient Matrix :---"<<endl;
    display_matrix();

    cout<<endl;
    cout<<"The Initial Guess : "<<endl;

    for(int i = 0; i < mat_size; i++){
        cin>>sol_ara[i][0];
        cout<<sol_ara[i][0]<<endl;
    }

    jacobi();
    cout<<endl;
    cout<<"The Solution table"<<endl;
    display_solution();


    return 0;
}

