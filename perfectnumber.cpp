#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int x=n;
    cout<<"the divisor of n is : ";
    for (int i=1;i<=n;i++)
    {
         if(n%i==0)
         cout<<i<<" ";  
    }
    // for checking it is perfect or not
    n=x;
    int sum=0;
    for (int i=1;i<n;i++)
    {
         if(n%i==0)
         sum=sum+i; 
    }
    if(sum==n)
    cout<<endl<<" the number is perfect number";
    else
    cout<<endl<<" the number is not perfect number";
    return 0;
}