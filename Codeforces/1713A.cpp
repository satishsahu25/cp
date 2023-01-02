#include<bits/stdc++.h>
using namespace std;

// *********MY APPROACH*****////
int main(){

 int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int ans=0;
/*

pair<int,int> xy[4];
long long ans=0;
for(int i=0;i<4; i++){

    int x,y;
    cin>>x>>y;
    xy[i]={x,y};


}
for(int i=0;i<4;i++){

}





*/

        vector<pair<int,int>> vx;
        vector<int> vy;
        for(int j=0; j < n; j++){
                int x,y;
                cin>>x>>y;
                // if(y==0){
                    vx.push_back({x,y});
                // }
                // if(x==0){
                //     vy.push_back(y);
                // }
        }

        // int xn,xp,yn,yp;
        // xn=*min_element(vx.begin(),vx.end());
        // xp=*max_element(vx.begin(),vx.end());
        // yn=*min_element(vy.begin(),vy.end());
        // yp=*max_element(vy.begin(),vy.end());
        sort(vx.begin(), vx.end());
        int y0=vx[0].second,y1=vx[1].second,x4=vx[2].first,x3=vx[3].first;

        if(y0*y1<0){
            ans+= abs(y0)+abs(y1);
        }
        else{
            ans+= max(abs(y0),abs(y1));
        }
        if(x3*x4<0){
            ans+= abs(x3)+abs(x4);
        }
        else{
            ans+= max(abs(x3),abs(x4));
        }


        // if(xn>0&&xp>0){
        //     ans+=abs(xp);
        // }else if(xn<0 && xp<0){
        //             ans+=abs(xn);
        // }else{
        //     ans+=abs(xn)+abs(xp);
        // }


        //  if(yn>0&&yp>0){
        //         ans+=abs(yp);
        // }else if(yn<0 && yp<0){
        //     ans+=abs(yn);
            
        // }else{
        //     ans+=abs(yn)+abs(yp);
        // }

        cout<<ans*2<<endl;
    }
    return 0;
}