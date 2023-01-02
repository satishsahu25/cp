#include <bits/stdc++.h>

using namespace std;


    //simpole recursion

// int robbery1(vector<int> &nums, int n)
// {

//     // case-1
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return 0;

//     int incl1 = robbery1(nums, n - 2) + nums[n];
//     int excl1 = robbery1(nums, n - 1);
//     int ans1 = max(incl1, excl1);
//     return ans1;
// }
// int robbery2(vector<int> &nums, int n)
// {
//     // case-2
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return nums[0];

//     int incl2 = robbery2(nums, n - 2) + nums[n];
//     int excl2 = robbery2(nums, n - 1);
//     int ans2 = max(incl2, excl2);

//     return ans2;
// }

// int rob(vector<int> &nums)
// {
//     int n = nums.size();
//     if (n == 1)
//         return nums[0];
//     int ans = max(robbery1(nums, n - 1), robbery2(nums, n - 2));
//     return ans;
// }


//top-down approach
int robbery1(vector<int> &nums, int n, vector<int> &dp1)
{

    // case-1
    if (n < 0)
        return 0;
    if (n == 0)
        return 0;
    if(dp1[n]!=-1) return dp1[n];

    int incl1 = robbery1(nums, n - 2,dp1) + nums[n];
    int excl1 = robbery1(nums, n - 1,dp1);
     dp1[n] = max(incl1, excl1);

    return dp1[n];
}
int robbery2(vector<int> &nums, int n, vector<int> &dp2)
{
    // case-2
    if (n < 0)
        return 0;
    if (n == 0)
        return nums[0];
        if(dp2[n]!=-1) return dp2[n];

    int incl2 = robbery2(nums, n - 2,dp2) + nums[n];
    int excl2 = robbery2(nums, n - 1,dp2);
    dp2[n] = max(incl2, excl2);

    return dp2[n];
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
        vector<int> dp1(n,-1),dp2(n,-1);
    int ans = max(robbery1(nums, n - 1,dp1), robbery2(nums, n - 2,dp2));
    return ans;
}



int main()
{

    return 0;
}