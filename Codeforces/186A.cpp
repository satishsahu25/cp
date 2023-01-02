#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    int maxcount=0;
    vector<int>vp;

    if((s1.length()!=s2.length())){
        cout<<"NO";
    }else{
        for(int i=0;i<s1.length();i++){
              if(maxcount==2){
                break;
            }
            if(s1[i]!=s2[i]){
                vp.push_back(i);
                 maxcount++;
            }
           
        }
    }
    
   

    if(vp.size()==1) cout<<"NO";
    else if(vp.size()>1){
         char temp=s1[vp[0]];
    s1[vp[0]]=s1[vp[1]];
    s1[vp[1]]=temp;
    if(s1==s2) cout<<"YES";
    else cout<<"NO";
    }

    return 0;
}