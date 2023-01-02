#include<bits/stdc++.h>

using namespace std;

// int solve(vector<int> nums,int n){
//     if(n<0) return 0;
//     if(n==0) return nums[0];

//     int incl=solve(nums,n-2)+nums[n];
//     int excl=solve(nums,n-1);
//     if(incl>excl) return incl;
//     else return excl;

// }


// int maximumNonAdjacentSum(vector<int> &nums){
//     // Write your code here.
//     int n=nums.size();
//     int ans=solve(nums,n-1);
//     return ans;
    
// }

        //top down
// int solve(vector<int> nums,int n,vector<int> &dp){
//     if(n<0) return 0;
//     if(n==0) return nums[0];

//     if(dp[n]!=-1) return dp[n];
//     int incl=solve(nums,n-2,dp)+nums[n];
//     int excl=solve(nums,n-1,dp);
//     dp[n]=max(incl,excl);
//     return dp[n];

// }


// int maximumNonAdjacentSum(vector<int> &nums){
//     // Write your code here.
//     int n=nums.size();
//     vector<int> dp(n+1,-1);
//     int ans=solve(nums,n-1,dp);
//     return ans;
    
// }

    //bottom up approach

// int solve(vector<int> nums){
//     int n=nums.size();
//     vector<int> dp(n+1);
//     if(n<0) return 0;
//     dp[0]=nums[0];

//     for(int i=1;i<=n;i++){
//         int incl=dp[i-2]+nums[i];
//         int excl=dp[i-1];
//         dp[i]=max(incl,excl);
//     }
   
//     return dp[n-1];    

// }




// in O(1)
int solve(vector<int> nums){
    int n=nums.size();
   
    int prev1=nums[0];
    int prev2=0;

    int ans;
    for(int i=1;i<=n;i++){
        int incl=prev2+nums[i];
        int excl=prev1;
        ans=max(incl,excl);
        prev2=prev1;
        prev1=ans;
    }
   
    return prev1;    

}


int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int ans=solve(nums);
    return ans;
    
}

int main(){



    return 0;
}