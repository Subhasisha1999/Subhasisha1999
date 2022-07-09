#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the value for n : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-1;j>=i;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}