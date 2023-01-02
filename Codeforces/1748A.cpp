#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    vector<long long int>v;

    for(int i=0;i<t;i++){
        long long int x;cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<t;i++){

    // time taking approach 

        // long long int sum=0;
        // for(long long int j=1;j<=v[i];j++){
        //        if(j%2==0){
        //             sum=sum+j/2;
        //        }else{
        //              sum=(sum+j/2)+1;
        //        }
        // }
        // long long int k=1;
        // while(k*k<=sum){
        //     k++;
        // }
        // cout<<k-1<<endl;

        // *******on observation

        if(v[i]%2!=0){
            cout<<(v[i]/2)+1<<endl;
        }else{
            cout<<v[i]/2<<endl;
        }



    }
    



    return 0;
}