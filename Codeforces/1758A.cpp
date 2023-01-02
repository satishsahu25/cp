#include<bits/stdc++.h>
using namespace std;

bool checkstring(string s){
    int l=0;
    int r=s.length()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

string reversestr(string s){
    string sr="";
    for(int i=s.length()-1;i>=0;i--){
        sr=sr+s[i];
    }
    return sr;
}

int main(){
    
    int n;
    cin>>n;
 string s;
    vector<string> vs;
    for(int i=0;i<n;i++){
         cin>>s;
         vs.push_back(s+reversestr(s));
    }

    for(int i=0;i<n;i++){
        cout<<vs[i]<<endl;
        // cout<<checkstring(vs[i])<<endl;
    }
    

// cout<<checkstring(s)<<endl;


    return 0;
}