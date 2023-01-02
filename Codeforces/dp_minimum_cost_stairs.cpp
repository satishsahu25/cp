#include<bits/stdc++.h>

using namespace std;

// int solve(vector<int> cost,int  n){
//     //base case
//     if(n==0) return cost[0];
//     if(n==1)  return cost[1];

//     int ans=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
//     return ans;
// }


        // top down approach
// int solve(vector<int> cost,int  n,vector<int> &dp){
//     //base case
//     if(n==0) return cost[0];
//     if(n==1)  return cost[1];

//     if(dp[n]!=-1) return dp[n];
//     dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
//     return dp[n];
// }


    // down-top approach
int solve(vector<int> &cost,int n){
    vector<int> dp(n+1);
    dp[0]=cost[0];
    dp[1]=cost[1];

    for(int i=2;i<n;i++){
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}


int main(){

    int n;cin>>n;
    vector<int> costs;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        costs.push_back(x);
    }

    cout<<min(solve(costs,n-1),solve(costs,n-2))<<endl;

    

    return 0;
}