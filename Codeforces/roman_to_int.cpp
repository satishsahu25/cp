#include <bits/stdc++.h>
using namespace std;
// #define  ll long long int;
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define REP(i, n) for(int i = 0; i < n; i++)
typedef long long int ll;

const double PI = 3.141592653589793238460;

int romanToInt(string s)
{
    int num=0;
    for(int i=0;i<s.length();i++){

        if(s[i]=='I'&&s[i+1]=='V'){
            num=num+4;
            i++;
        }else if(s[i]=='X'&&s[i+1]=='L'){
            num=num+40;
            i++;
        }else if(s[i]=='X'&&s[i+1]=='C'){
            num=num+90;
            i++;
        }else if(s[i]=='C'&&s[i+1]=='D'){
            num+=400;
            i++;
        }else if(s[i]=='C'&&s[i+1]=='M'){
            num+=900;
            i++;
        }else if(s[i]=='I'&&s[i+1]=='X'){
            num+=9;
            i++;
        }else{
            switch(s[i]){
                case 'X':
                num=num+10;
                break;
                 case 'V':
                num=num+5;
                break;
                 case 'I':
                num=num+1;
                break;
                 case 'L':
                num=num+50;
                break;
                 case 'C':
                num=num+100;
                break;
                 case 'D':
                num=num+500;
                break;
                 case 'M':
                num=num+1000;
                break;
            }

        }
    }
    return num;
   
}
int main()
{

    return 0;
}