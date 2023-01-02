#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    int t;cin>>t;
    vector<int> v;

    for(int i=0;i<t;i++){
        int x;cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<t;i++){
         int size=v[i]*3;
        if(v[i]%2==0){
            cout<<v[i]/2<<endl;
           for(int j=0,k=0;j<v[i]/2;j++,k=k+3){
                    cout<<k+1<<" "<<size-k<<endl;
            }       
        }else{
            cout<<v[i]/2+1<<endl;
             for(int j=0,k=0;j<=v[i]/2;j++,k=k+3){
                    cout<<k+1<<" "<<size-k<<endl;
            }
        }
    }

    
   
 


    return 0;
}