#include <bits/stdc++.h>
using namespace std;


//  top down
// int fibo(int n, int dp[])
// {

//     if (n == 0 || n == 1)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];
//     dp[n] = fibo(n - 2, dp) + fibo(n - 1, dp);
//     return dp[n];
// }


//bottom up (base to nth term)
// int fibo(int n,int dp[]){
//     dp[0]=0,dp[1]=1;
//     if(n==0)return dp[0];
//     if(n==1) return dp[1];

//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
    
// }

int main()
{

    int n;
    cin >> n;
    // int dp[n + 1];
    // for (int i = 0; i <= n; i++)
    // {
    //     dp[i] = -1;
    // }

    // cout << fibo(n, dp);
    if(n==0) cout<<0;
    if(n==1) cout<<1;
    int prev1=1;
    int prev2=0;

    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1<<endl;

    return 0;
}