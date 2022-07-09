#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"enter the number : "<<endl;
    cin>>n;
    while(n>0){
        rem=n%10;
        //if the number(rev) is equal to 2^31-1(maximum) and 2^31(minimum)
        //so we put this if condition so the number is not going out of the range
        if( (rev>INT_MAX/10)||(rev<INT_MIN/10) )
        return 0;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse integer is : "<<endl<<rev;
    return 0;
}