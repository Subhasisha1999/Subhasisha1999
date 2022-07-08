#include<iostream>
using namespace std;
int main(){
    int p,t,r;
    float si;
    cout<<"enter the value of principal : "<<endl;
    cin>>p;
    cout<<"enter the value of  time: "<<endl;
    cin>>t;
    cout<<"enter the value of  rate : "<<endl;
    cin>>r;
    si=(p*t*r)/100;
    cout<<"the value of simple interest rate is : "<<si<<endl;
    return 0;
}