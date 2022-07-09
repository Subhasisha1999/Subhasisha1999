#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number : ";
    cin>>n;
    if(n<0)
    cout<<"facctorial not found";
    if(n==0){
    cout<<"facctorial of 0 is : "<< 1;
    }
    else{
    while(n!=0){
        fact=fact*n;
        n--;
    }
    cout<<"facctorial of the number: "<<fact ;
    }
    return 0;

}