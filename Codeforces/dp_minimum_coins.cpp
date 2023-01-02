#include <bits/stdc++.h>

using namespace std;

int minimum(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

// top-down  step-1 create dp array , step2 store in dp array

// int coin(vector<int>arr,int target,vector<int> &dp){
//     int n=arr.size();
//     if(target==0) return 0;
//     if(target<0) return INT_MAX;

//     long int mini=INT_MAX;
//     if(dp[target]!=-1) return dp[target];
//     for(int i=0;i<n;i++){
//        int ans=coin(arr,target-arr[i],dp);
//        if(ans!=INT_MAX)
//             mini=minimum(mini,1+ans);
//     }
//     dp[target]=mini;
//     return dp[target];

// }

// bottom up

int coin(vector<int> arr, int target)
{
    int n = arr.size();
    //step-1
    vector<int> dp(target + 1, INT_MAX);
    dp[0]=0;

    for(int i=1;i<=target;i++){
       for(int j=0;j<n;j++){
           if(i-arr[j]>=0&&dp[i-arr[j]]!=INT_MAX)
        dp[i]=min(dp[i],1+dp[i-arr[j]]); //step-2
       }
    }
    return dp[target];
    
}

int coinChange(vector<int> &coins, int amount)
{

    int ans = coin(coins, amount);
    if (ans == INT_MAX)
        return -1;
    else
        return ans;
}