#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0,pro=1;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    cout<<"the sum is : "<<sum;
    cout<<endl<<"the product is : "<<pro;
    cout<<endl<<"the substraction  is : "<<pro-sum;
    return 0;
}