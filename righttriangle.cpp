#include<iostream>
using namespace std;
int main(){
    int i,k,j,n;
    cout<<"enter the value for n : "<<endl;
    cin>>n;
    //left part
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }   
    return 0;
}