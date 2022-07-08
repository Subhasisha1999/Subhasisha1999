 #include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the value of n  : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=i+sum;
    }
    cout<<"the sum is : "<<sum <<endl;
    cout<<i << " & "<<n;
    return 0;
}