#include<bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main(){

 int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int> vx;
        vector<int> vy;
        int flag=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x==0 && y!=0){
                vy.push_back(y);
            }else if(y==0&&x!=0){
                vx.push_back(x);
            }else if(x==0&&y==0&&n==1){
                flag=1;
            }         
        }
        
        if(flag==0){
            sort(vx.begin(), vx.end());
        sort(vy.begin(), vy.end());
    int ans=0;

        if(vx[0]>=0){
            ans+=*max_element(vx.begin(),vx.end());
        }else if(*(vx.end()-1)<0){
            ans+=abs(vx[0]);
        }else{
            ans+=*(vx.end()-1)+abs(vx[0]);
        }
        
         if(vy[0]>=0){
            ans+=*max_element(vy.begin(),vy.end());
        }else if(*(vy.end()-1)<0){
            ans+=abs(vy[0]);
        }else{
            ans+=*(vy.end()-1)+abs(vy[0]);
        }
        cout<<ans*2<<endl;
        }else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}