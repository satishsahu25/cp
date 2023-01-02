
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

// recursion

// int countWays(int n)
// {
//     // Write your code here
//     int k=2;
//     if(n==0) return 0;
//     if(n==1) return 2;
//     if(n==2) return 4;

//     int ans=(((k-1)*(countWays(n-2)%MOD))%MOD+((k-1)*(countWays(n-1)%MOD))%MOD)%MOD;
//     return ans;
// }

// top down memo

// int solvememo(int n,vector<int>&dp){
//      int k=2;
//     if(n==0) return 0;
//     if(n==1) return 2;
//     if(n==2) return 4;
//     if(dp[n]!=-1) return dp[n];
//      int ans=((((k-1)*solvememo(n-2,dp)%MOD))%MOD+((k-1)*solvememo(n-1,dp)%MOD)%MOD)%MOD;
//      dp[n]=ans;
//      return dp[n];
// }

// int countWays(int n)
// {
//     // Write your code here

//    vector<int> dp(n+1,-1);
//     int ans=solvememo(n,dp);

//     return ans;
// }

// tabulation
// int solvememo(int n)
// {
//     vector<int> dp(n + 1);
//     int k = 2;
//     dp[0] = 0;
//     dp[1] = 2;
//     dp[2] = 4;

//     for (int i = 3; i <= n; i++)
//     {
//         dp[i] = ((((k - 1) * dp[i - 2] % MOD)) % MOD + ((k - 1) * dp[i - 1] % MOD) % MOD) % MOD;
//     }
//     return dp[n];
// }


        // space optimization
        int solvememo(int n)
{
   
    int k = 2;
 
    int prev2 = 2;
    int prev1= 4;
    

    for (int i = 3; i <= n; i++)
    {
        int ans = ((((k - 1) * prev2 % MOD)) % MOD + ((k - 1) * prev1 % MOD) % MOD) % MOD;
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}

int countWays(int n)
{
    // Write your code here

    int ans = solvememo(n);

    return ans;
}

int main()
{

    return 0;
}