#include <bits/stdc++.h>
using namespace std;

int unboundknapsack(int W, int val[], int wt[], int n)
{

    // base condition
    // return toh value hi karwana hai fucntion se toh jab
    // zero index par jaye toh uski value return karni hai
    // but kitni baar len hai usko is  (W/wt[n]) for  a particular weight

    if (n == 0)
    {
        return (W / wt[0]) * val[0];
    }
    // finally recursive apprioach se take aur not take mein finla value aa jayegin
    int nottake = 0 + unboundknapsack(W, val, wt, n - 1);

    int take = INT_MIN;
    // check ki baar baar le skate hia ki nahi is element ko
    if (wt[n] <= W)
    {
        take = val[n] + unboundknapsack(W - wt[n], val, wt, n);
    }

    return max(take, nottake);
}

int main()
{
    int W = 100;
    int val[] = {10, 30, 20};
    int wt[] = {5, 10, 15};
    int indx = sizeof(val) / sizeof(val[0]);
    cout << unboundknapsack(W, val, wt, indx - 1);

    return 0;
}