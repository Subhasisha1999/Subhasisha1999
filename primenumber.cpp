#include<iostream>
using namespace std;
int main(){
    int n,i=2,flag=0;
    cout<<"enter the number : ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
    cout<<"number is not prime number "<<endl;
    }
    else{
        cout<<"number is prime number "<<endl;
    }
    return 0;
}