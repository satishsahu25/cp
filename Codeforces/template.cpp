// /*
// #include <bits/stdc++.h>
// using namespace std;
// #define  ll long long int;
// #define pb push_back
// #define ff first
// #define ss second
// #define pi pair<int, int>
// #define vi vector<int>
// #define vp vector<pair<int,int>>
// #define REP(i, n) for (int i = 1; i <= n; i++)


// const double PI = 3.141592653589793238460;

// int main()
// {



//     return 0;
// }
// */

// #include <bits/stdc++.h>
// using namespace std;
// // #define  ll long long int;
// #define pb push_back
// #define ff first
// #define ss second
// #define pi pair<int, int>
// #define vi vector<int>
// #define vp vector<pair<int,int>>
// #define REP(i, n) for (int i = 1; i <= n; i++)
// typedef long long int ll;

// const double PI = 3.141592653589793238460;


// void solve(){
//     int n;cin>>n;
//     vector<int> v(n),ans(n);
//     unordered_map<int,int> mp;
//     int f=0;
//     for(int &x:v){cin>>x,mp[x]++;
//         if(f>mp[x])f=mp[x];
//     }
//     int temp=(n+1)/2;
//     if(f > temp){cout<<"-1\n";return;}
//     sort(v.begin(),v.end());
//     int i=0,j=n-1;
//     while(i<=n/2){
//         ans[2*i]=v[i];
//         ans[2*i+1]=v[j];
//         i++;j--;
//     }
//     for(int &x:ans)cout<<x<<" ";
//     cout<<"\n";
    
// }

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--)solve();
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n),ans(n);
    unordered_map<int,int> mp;
    int f=0;
    for(int &x:v){cin>>x;
       mp[x]++;
        if(f<mp[x])f=mp[x];
    }
    int temp=(n+1)/2;
    if(f > temp){cout<<"-1\n";return;}
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<=n/2){
        ans[2*i]=v[i];
        ans[2*i+1]=v[j];
        i++;j--;
    }
    for(int &x:ans)cout<<x<<" ";
    cout<<"\n";
    
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)solve();
	return 0;
}
