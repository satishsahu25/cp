#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;string s;cin>>n>>s;

    long long int total=0;
    for(int i=0;i<n;i++){
        long long int maxo=0;
        // long long int arr[10]={0};
        map<int,int> mp;
        set<int> st;
        for(int j=i;j<n;j++){
            if(j-i>=101) break;
            int digit=s[j]-'0';
            int c=++mp[digit];
            if(maxo>c){
                maxo=maxo;
            }else{
                maxo=c;
            }
            st.insert(digit);
            if(maxo<=st.size()){
                    total++; 
                
            } 
        }
       
    }
    cout<<total<<endl;
    }

    return 0;
}