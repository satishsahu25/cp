#include<bits/stdc++.h>
using namespace std;

// **************////
// &   -AND  >>>>>result of AND is 1 only if both bits are 1.  
// |   -OR   >>>>>>The result of OR is 1 if any of the two bits is 1. 
// ^   -XOR  >>>>>>The result of XOR is 1 if the two bits are different. 
// <<  -LEFT Shift  >>>>>
// >>  -right Shift >>right shifts the bits of the first operand, the second operand decides the number of places to shift. 
// ~   -NOT  >>>one number and inverts all bits of it. 

// odd-odd--even
// even-odd--odd
// even-even--even


int main(){

//  int t;cin>>t;
    int a,b;
    cin>>a>>b;

    // *******think in  terms of 8 bits*******//

  cout<<"a = " << a <<","<< " b = " << b <<endl;

   cout << "a & b = " << (a & b) << endl;

    cout << "a | b = " << (a | b) << endl;
 
    cout << "a ^ b = " << (a ^ b) << endl;
 
    cout << "~a = " << (~a) << endl;
 
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;


    return 0;
}