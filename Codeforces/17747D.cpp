#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, q, i, j, l, r, x;
    
    cin>>n>>q;
    
    ll a[n+1], zero[n+1], pre[n+1];
    
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(a[1]==0)
    zero[1]=1;
    else
    zero[1]=0;
    
    pre[1]=a[1];
    
    zero[0]=pre[0]=0;
    a[0]=0;
    
    for(i=2; i<=n; i++){
        pre[i]=pre[i-1]^a[i];
        if(a[i]==0)
        zero[i]=zero[i-1]+1;
        else
        zero[i]=zero[i-1];
    }
    
    map<ll, vector<ll>> mp[2];
    
    for(i=1; i<=n; i++)
    {
        if((i%2)==0){
            mp[0][pre[i]].push_back(i);
        }else{
            mp[1][pre[i]].push_back(i);
        }
    }
    
    for(;q--;)
    {
        cin>>l>>r;
        
        
        x=pre[r]^pre[l-1];
        
        if(x!=0){
            cout<<"-1\n";
            continue;
        }
        
        if(zero[r]-zero[l-1]==(r-l+1)){
            cout<<"0\n";
            continue;
        }
        
        if((r-l+1)%2==1){
            cout<<"1\n";
            continue;
        }
        
        if(a[r]==0 || a[l]==0){
            cout<<"1\n";
            continue;
        }
        
        vector<ll>::iterator itr;
        if((l%2)==0){
            itr=lower_bound(mp[0][pre[l-1]].begin(), mp[0][pre[l-1]].end(), l);
            
            
            if(itr!=mp[0][pre[l-1]].end()){
                i=mp[0][pre[l-1]][itr-mp[0][pre[l-1]].begin()];
            }else{
                i=-1;
            }
            
            if(i<r && i>l){
                cout<<"2\n";
            }else{
                cout<<"-1\n";
            }
        }else{
            itr=lower_bound(mp[1][pre[l-1]].begin(), mp[1][pre[l-1]].end(), l);
            
            if(itr!=mp[1][pre[l-1]].end()){
                i=mp[1][pre[l-1]][itr-mp[1][pre[l-1]].begin()];
            }else{
                i=-1;
            }
            
            if(i<r && i>l){
                cout<<"2\n";
            }else{
                cout<<"-1\n";
            }
        }
        
        
    }
}