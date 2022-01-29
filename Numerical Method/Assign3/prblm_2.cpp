#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

#define MAX 50



void display_solution();
bool is_char(char x);
bool is_operator(char x);
bool is_minus(char x);
double convert_to_float(string coef);
void augmented_mat(double mat[][MAX], int change);
double guass(double ara[][MAX], int m, int n);
void display_solution();
void display_matrix(double ara[][MAX], int m, int n);
void matrix_form();
void variable_parsing(string str, int equ_no);
void parsing(string str, int equ_no);
double jordan(double ara[][MAX], int m, int n);
void cal_inverse_matrix();



double sol_ara[MAX];
double const_ara[MAX];
double coef_ara[MAX][MAX];
double inv_mat[MAX][MAX];
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


void augmented_mat(double mat[][MAX]){

    for(int i=0; i<mat_size; i++){
        for(int j=0; j<2*mat_size; j++){
            if(j >=mat_size){
                if(j%mat_size == i)
                    mat[i][j] = 1;
                else
                    mat[i][j] = 0;
            }
            else
                mat[i][j] = coef_ara[i][j];

        }
    }
}



double jordan(double ara[][MAX], int m, int n){
    for(int i=m-1; i>=0; i--){

        //make the value 0 which is below the pivot
        for(int j=i-1; j>=0; j--){

            if(ara[j][i] == 0){
                continue;
            }

            double x = (ara[j][i] * 1.0) / ara[i][i];
            x *= (-1);

            for(int k=0; k<n; k++){
                ara[j][k] = ara[i][k] * x + ara[j][k];
            }
        }
    }

    display_matrix(ara, m, n);
}


double gauss(double ara[][MAX], int m, int n){

    for(int i=0; i<m; i++){

     //check t=if pivot is zero, if zero, swap with other row
        if(ara[i][i] == 0){
            //search the pivot which is not zero
            for(int j=m-1; j>i; j--){
                if(ara[j][i] !=0){
                    //swap the row
                    for(int k=0; k<n; k++){
                        swap(ara[j][k], ara[i][k]);
                    }
                }
            }
        }

        //make the pivot the 1
        double x = ara[i][i];
        for(int j=i; j<n; j++){
            ara[i][j] /= x;
        }

        //make the value 0 which is below the pivot
        for(int j=i+1; j<mat_size; j++){

            if(ara[j][i] == 0){
                continue;
            }

            double x = (ara[j][i] * 1.0) / ara[i][i];
            x *= (-1);

            for(int k=i; k<n; k++){
                ara[j][k] = ara[i][k] * x + ara[j][k];
            }
        }
    }
    display_matrix(ara, m, n);
}


void extract_inverse(double ara[][MAX], int m, int n){
    for(int i=0; i<m; i++){
        int k = 0;
        for(int j=m; j<n; j++){
            inv_mat[i][k] = ara[i][j];
            k++;
        }
    }
}

void mat_multi(){
    for(int i=0; i<mat_size; i++){
        for(int j=0; j<mat_size; j++){
            sol_ara[i] += inv_mat[i][j] * const_ara[j];
        }
    }
}


void cal_inverse_matrix(){
    double mat[MAX][MAX];
    augmented_mat(mat);

   // display_matrix(mat, mat_size, mat_size*2);

    gauss(mat, mat_size, 2*mat_size);
   // cout<<"After Guass result"<<endl;
   // display_matrix(mat, mat_size, 2*mat_size);

    jordan(mat, mat_size, 2*mat_size);
   // cout<<"After Jordan result"<<endl;
   // display_matrix(mat, mat_size, 2*mat_size);

    extract_inverse(mat, mat_size, 2*mat_size);
    cout<<endl;
    cout<<"Inverse Matrix : "<<endl;
    display_matrix(inv_mat, mat_size, mat_size);
}

void display_solution(){
    set<string>::iterator it;
    it=st.begin();
    for(int i=0; i<mat_size; i++, it++){
        cout<<*it<<" = "<<sol_ara[i]<<endl;
    }
}

void display_matrix(double ara[][MAX], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<ara[i][j]<< "   ";
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


int main()
{
    freopen("input2.txt", "r", stdin);
   // freopen("output2.txt", "w", stdout);

    string str;
    int equ_no = 0;

    cout<<"The equations are: ---"<<endl;
    while( getline(cin,str)){
        cout<<str<<endl;
        parsing(str, equ_no);
        equ_no++;
    }

    matrix_form();
    cout<<endl;
    cout<<"The Coefficient Matrix :---"<<endl;
    display_matrix(coef_ara, mat_size, mat_size);

    cal_inverse_matrix();
   // mat_multi();
    cout<<endl;
    cout<<"The Solutions are : ---"<<endl;
   // display_solution();

    return 0;
}

