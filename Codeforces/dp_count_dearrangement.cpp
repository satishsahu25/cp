
#include <bits/stdc++.h>
using namespace std;
// recursion
// long long int countDerangements(int n) {
//     // Write your code here.
//     //base case
//     if(n==1) return 0;
//     if(n==2) return 1;

//     int ans=(n-1)*(countDerangements(n-1)+countDerangements(n-2));
//     return ans;

// }

/// top-down

#define MOD 1000000007

// long long int solve(int n,vector<long long int> &dp){

//     if(n==1) return 0;
//     if(n==2) return 1;
//     if(dp[n]!=INT_MAX) return dp[n];

//     long long int ans=(((n-1)*(solve(n-1,dp)))%MOD+((n-1)*solve(n-2,dp))%MOD)%MOD;
//     dp[n]=ans;
//     return dp[n];

// }

// long long int countDerangements(int n) {
//     // Write your code here.
//     //base case
//     vector<long long int> dp(n+1,INT_MAX);
//     long long int ans=solve(n,dp);
//     return ans;

// }

// *******tabulation

// long long int solvetab(int n)
// {

//     vector<long long int> dp(n + 1, 0);
//     dp[1] = 0;
//     dp[2] = 1;

//     for (int i = 3; i <= n; i++)
//     {
//         dp[i] = ((i - 1) * ((dp[i - 1] % MOD + dp[i - 2] % MOD) % MOD)) % MOD;
//     }
//     return dp[n];-
// }

// long long int countDerangements(int n)
// {
//     // Write your code here.
//     // base case

//     long long int ans = solvetab(n);
//     return ans;
// }


// space optimization
// we know that its fixed ki dp[i] depends on just dp[i-1] and dp[i-2] 
// just two nearest back neighbours which are know in every step
long long int solvetab(int n)
{

    long long int prev2= 0;
    long long int prev1= 1;

    for (int i = 3; i <= n; i++)
    {
       long long int ans = ((i - 1) * ((prev1% MOD + prev2 % MOD) % MOD)) % MOD;
       prev2=prev1;
       prev1=ans;
    }
    return prev1;
}

long long int countDerangements(int n)
{
    // Write your code here.
    // base case

    long long int ans = solvetab(n);
    return ans;
}


int main()
{

    return 0;
}