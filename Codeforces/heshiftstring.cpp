#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int m;cin>>m;
    vector<string> vs;
    for(int i=0;i<m;i++){
        string x;cin>>x;
        vs.push_back(x);
    }
    int total=0;
    for(int i=0;i<vs.size();i++){
        int op=0;
        string y=vs[i];
        for(int j=0;j<n;j++){
            if(y[j]==s[j]) continue;
            else if(s[j]=='z' || y[j]=='z'){
                op=op+(y[j]-s[j]+1)%25;
            }else{
                op=op+abs(s[j]-y[j]);      
            }
        }
        total=total+op;
        cout<<op<<" ";
    }
    cout<<total;

    
   


    return 0;
}