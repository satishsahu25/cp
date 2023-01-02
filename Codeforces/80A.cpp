#include <bits/stdc++.h>
using namespace std;

bool primen(int num)
{
    
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }

return true;
}

int main()
{

    int n, m;
    cin >> n >> m;
    
    int i=n+1;
    while (1)
    {
        if (primen(i))
        { 
            break;
        }           
         
        i++;   
        
    }
    if(i==m)cout<<"YES";
    else cout<<"NO";

    return 0;
}