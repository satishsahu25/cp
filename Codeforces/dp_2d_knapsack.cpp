#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

// 2d kyoki passing funciton mein 2 vraiables ki vlaue change ho rahi hai
// har recursive call mein

// *******recusive
// int solve(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     // Write your code here
//     if (n == 0)
//     {
//         if (weight[0] <= maxWeight)
//             return value[0];
//         else
//             return 0;
//     }

//     int incl = 0;
//     if (weight[n] <= maxWeight)
//         incl = value[n] + solve(weight, value, n - 1, maxWeight - weight[n]);
//     int excl = 0 + solve(weight, value, n - 1, maxWeight);

//     return max(incl, excl);
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     return solve(weight, value, n - 1, maxWeight);
// }

// *****top-down memoization**
// int solve(vector<int> weight, vector<int> value, int n, int maxWeight,vector<vector<int>>&dp)
// {
//     // Write your code here
//     if (n == 0)
//     {
//         if (weight[0] <= maxWeight)
//             return value[0];
//         else
//             return 0;
//     }

//     if(dp[n][maxWeight]!=-1) return dp[n][maxWeight];

//     int incl = 0;
//     if (weight[n] <= maxWeight)
//         incl = value[n] + solve(weight, value, n - 1, maxWeight - weight[n],dp);
//     int excl = 0 + solve(weight, value, n - 1, maxWeight,dp);

//     dp[n][maxWeight]= max(incl, excl);
//     return dp[n][maxWeight];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     //row,column  & initialize with -1
//     vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));

//     return solve(weight, value, n - 1, maxWeight,dp);
// }

// **********tabulation*********

// yaha dekh sakte hai ki dp[index] wali row
//  depnd karta hai keval dp[index-1] wali row par

// int solve(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     // Write your code here
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));
//     // row 0 ke liye logic

//     for (int w = weight[0]; w <= maxWeight; w++)
//     {
//         if (weight[0] <= maxWeight)
//             dp[0][w] = value[0];
//         else
//             dp[0][w] = 0;
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = 0; w <= maxWeight; w++)
//         {
//             int incl = 0;
//             if (weight[index] <= w)
//                 incl = value[index] + dp[index - 1][w - weight[index]];
//             int excl = 0 + dp[index - 1][w];

//             dp[index][w] = max(incl, excl);
//         }
//     }

//     return dp[n - 1][maxWeight];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     // row,column  & initialize with -1

//     return solve(weight, value, n, maxWeight);
// }

// *********sapce optimization-1

// int solve(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
    

//     vector<int> prev(maxWeight+1,0);
//     vector<int> curr(maxWeight+1,0);

//     for (int w = weight[0]; w <= maxWeight; w++)
//     {
//         if (weight[0] <= maxWeight)
//             prev[w] = value[0];
//         else
//            prev[w] = 0;
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = 0; w <= maxWeight; w++)
//         {
//             int incl = 0;
//             if (weight[index] <= w)
//                 incl = value[index] + prev[w - weight[index]];
//             int excl = 0 +prev[w];

//             curr[w] = max(incl, excl);  
//         }
//         prev=curr;
//     }

//     return prev[maxWeight];
// }


// **********space optimisation-2
int solve(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    

    vector<int> curr(maxWeight+1,0);

    for (int w = weight[0]; w <= maxWeight; w++)
    {
        if (weight[0] <= maxWeight)
            curr[w] = value[0];
        else
           curr[w] = 0;
    }

    for (int index = 1; index < n; index++)
    {
        for (int w = maxWeight; w >=0; w--)
        {
            int incl = 0;
            if (weight[index] <= w)
                incl = value[index] + curr[w - weight[index]];
            int excl = 0 +curr[w];

            curr[w] = max(incl, excl);  
        }
    }

    return curr[maxWeight];
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    // row,column  & initialize with -1

    return solve(weight, value, n, maxWeight);
}

int main()
{

    return 0;
}