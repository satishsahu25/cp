#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int r,int c){
    if(x<=r&&x>0&&y<=c&&y>0) return true;
    else return false;
}

int main(){
    int n,m;cin>>n>>m;
    const int r=n;
     const int c=m;
    char arr[r][c];

    for(int i=1; i <= r; i++){
        for(int j=1; j <= c; j++){
            char x;cin>>x;
            arr[i][j]=x;
        }
    }

void dfs(char arr[][m],int xx,int yy,int r,int c){
   
}
    for(int i=1;i< r; i++){

        for(int j=1;j<c;j++){
            dfs(arr,i-1,j,r,c);
            dfs(arr,i+1,j,r,c);
            dfs(arr,i,j-1,r,c);
            dfs(arr,i,j+1,r,c);
            
        }
    }




    
    return 0;
}