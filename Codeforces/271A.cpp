#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
   
    while (1)
    {
        n++;
        int a=n/1000;  //1st digit
        int b=n/100 % 10;  //2nd digit
        int c=n/10%10;  //3rd digit
        int d=n%10; //4th digit
        if(a!=b && a!=c &&a!=d &&b!=c&&b!=d&&c!=d){
            cout<<a*1000+b*100+c*10+d;
            break;
        }
        
    }



    return 0;
}