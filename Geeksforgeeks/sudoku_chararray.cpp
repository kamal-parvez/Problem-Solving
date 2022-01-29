#include<bits/stdc++.h>
using namespace std;

#define unassigned '0'
#define N 9


char numChar(int num){
    return (char)'0' + num;
}

bool findUnassignedLocation(char grid[N][N], int &row, int &col){
    for(row=0; row<N; row++){
        for(col=0; col<N; col++){
            if(grid[row][col] == unassigned){
                return true;
            }
        }
    }
    return false;
}

bool rowConflict(char grid[N][N], int row, int num){
    for(int i=0; i<N; i++){
        if(grid[row][i] == numChar(num)){
            return false;
        }
    }
    return true;
}


bool colConflict(char grid[N][N], int col, int num){
    for(int row=0; row<N; row++){
        if(grid[row][col] == numChar(num))
            return false;
    }
    return true;
}

bool boxConflict(char grid[N][N], int row, int col, int num){
    for(int i=row; i<row+3; i++){
        for(int j=col; j<col+3; j++){
            if(grid[i][j] == numChar(num))
            return false;
        }
    }
    return true;
}



bool isSafe(char grid[N][N], int row, int col, int num){
    return rowConflict(grid, row, num) && colConflict(grid, col, num)
            && boxConflict(grid, row-row%3, col-col%3, num) && grid[row][col] == unassigned;
}


bool solvedSodoku(char grid[N][N]){
    int row, col;

    if(!findUnassignedLocation(grid, row, col)){
        return true;
    }

    for(int num=1; num<=9; num++){
        if(isSafe(grid, row, col, num)){
            grid[row][col] = numChar(num);
            if(solvedSodoku(grid)){
                return true;
            }
            grid[row][col] = unassigned;
        }
    }
    return false;
}


void grid_print(char grid[N][N]){
    for(int row=0; row<N; row++){
        for(int col=0; col<N; col++){
            printf("%c", grid[row][col]);
        }
        cout<<endl;
    }
}


int main(){

    freopen("input.txt","r", stdin);
    char grid[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>grid[i][j];
        }
    }

    grid_print(grid);
    cout<<"solution"<<endl;

    if(solvedSodoku(grid)){
        grid_print(grid);
    }
    else{
        cout<<"No solution exists"<<endl;
    }
    return 0;
}

