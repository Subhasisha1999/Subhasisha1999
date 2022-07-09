#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,rem,i=0,decimal=0;
    cout<<"enter the binary number : ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        i++;
        n=n/10;
    }
   cout<<"the decimal number is : "<<decimal;
    return 0;
}