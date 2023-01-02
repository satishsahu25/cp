#include<bits/stdc++.h>
using namespace std;

// vector<int> v1;
// vector<int> v2;

int numerify(string sstr){
    int leng=sstr.length();
 
    int i;
    for(i=0;i<leng;i++){
        if(sstr[i]=='0') continue;
        else break;
    }
  
    return stoi(sstr.substr(i,leng));
}

void funct(string s,int w, int m, int l , int r, int k){
    // start,lengthincluding
    //  cout<<s.substr(l-1,r-l+1);
    int mainn1=numerify(s.substr(l-1,r-l+1));
    int n=s.length();
    int l1,l2;
    int f=0;
    for(l1=0;l1+w-1<n;l1++){
        for(l2=0;l2+w-1<n;l2++){
            int n1=numerify(s.substr(l1,w));
            int n2=numerify(s.substr(l2,w));
            if(((n1*mainn1)+n2)%9==k){
                // v1.push_back(l1+1);
                // v2.push_back(l2+1);
                cout<<l1+1<<" "<<l2+1<<endl;
                f=1;
                break;
            } 
        }
         if(f==1) break;
    }
    if(f==0) cout<<-1<<" "<<-1<<endl;
   
}

int main(){

//  int t;cin>>t;
//     while(t--){
        
//     }

    string s;cin>>s;
    int w,m;
    cin>>w>>m;
    for(int i=0;i<m;i++){
        int l,r,k;
        cin>>l>>r>>k;
        funct(s,w,m,l,r,k);
    }
    return 0;
}