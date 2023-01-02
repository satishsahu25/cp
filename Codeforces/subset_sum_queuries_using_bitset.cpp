#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

int main()
{

    int n,q;cin>>n;
    int arr[n];
    long long int maxsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxsum+=arr[i];
    }
    cin>>q;
    int arrq[q];
    for(int i=0;i<q;i++){
        cin>>arrq[i];
    }
    bitset<15> b;
    b.set(0);
    for(int i=0;i<n;i++){
        b=b|(b<<arr[i]);
    }
    for(int i=0;i<q;i++){
        if(b[arrq[i]]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    cout<<endl<<b;
    


    return 0;
}
