#include<iostream>
using namespace std;
int main(){
    int n,x,digit,fact=1,sum=0;
    cout<<"enter the number : ";
    cin>>n;
    x=n;
     while(n!=0){
        digit=n%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
     }
     if(sum==x)
     cout<<"The number is strong number ";
     else
     cout<<"The number is not strong number  ";
    return 0;
}