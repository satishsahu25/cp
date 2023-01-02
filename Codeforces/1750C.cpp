#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    
    int t;cin>>t;
    vector<pair<int,pair<string,string>>> vp;
     for(int i=0;i<t;i++){
        int size;cin>>size;
        string s1,s2;
        cin>>s1>>s2;
        vp.push_back({size,{s1,s2}});
     }

     for(int i=0;i<t;i++){
        int size=vp[i].first;
        string s1=vp[i].second.first;
        string s2=vp[i].second.second;
        int type1=0,type2=0;
        for(int j=0;j<size;j++){
            if(s1[j]==s2[j]){
                    type1++;
            }else if(s1[j]=!s2[j]){
                    type2++;
            }
        }
        int f=0;
        if(type1==size) f=1;
        if(type2==size) f=2;
        if(f==0){
            cout<<"NO"<<endl;
        }else{
            if(f==1){
                cout<<"Yes"<<endl;

                

            }else if(f==2){
                cout<<"Yes"<<endl;

            }

        }

        

     }

   
 


    return 0;
}