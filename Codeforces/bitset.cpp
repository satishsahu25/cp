#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

int main()
{

    // // intteger to binary
    // bitset<4> a_int(8);
    // cout<<a_int<<endl;
    // //binary to integer
    // int n=(int )a_int.to_ulong();
    // cout<<n;

    // bitset<5> arr;
    // arr[0]=1;
    // cout<<endl<<arr;

    // //string ot binary
    // string str1="1011001010";
    // bitset<10> brr(str1);
    // cout<<endl<<"String to binary: "<<brr;

    // //binary to string
    // string newstr=brr.to_string();
    // cout<<endl<<"New String "<<newstr;

    // //counting total number of ones in binary
    // cout<<brr.count();

    // Basic Operations
    //  bitset<10> a(string("1001"));
    //  bitset<10> b(string("1010"));

    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<'\n';
    // cout<<(a^b)<<endl;
    // cout<<(~a)<<endl;
    // cout<<(a<<1)<<endl;
    // cout<<(a>>1)<<endl;

    // taking bit by bit string of binary
    //  //from left hand side
    //     string str1="1011110101";
    //     istringstream stream1(str1);
    //     bitset<2> s2;
    //     //for next 5 binary bits
    //     bitset<5> s5;
    //     stream1>>s2;
    //     cout<<s2<<endl;
    //     stream1>>s5;
    //     cout<<s5;

    // to check any one bit set or not
    bitset<4> a1(string("1011"));
    // cout<<a1.any()<<endl;
    //gives true or false as 2 1 are there
    // cout<<a1.none()<<endl;
    // 0000 ke lite true 11111 ke liye false

    //check all bits are set or not
    // cout<<a1.all();

    //flippping the bits
    // cout<<a1.flip()<<endl; //flipps all bits
    // cout<<a1<<endl;
    // cout<<a1.flip(1); //flips first index bit from right hand side

    //resetting the bits makes 1->0 0 as it it is
    cout<<a1.reset(1); //make 1th index bit to zero if one
    cout<<a1.reset(); //make all 1 to 0


    //Setting the bits make 0->1 and 1 as it is
    cout<<a1.set(1);
    cout<<a1.set(); //set all bits

    return 0;
}
