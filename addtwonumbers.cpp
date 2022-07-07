#include<iostream>
 using namespace std;
 int sum(int a,int b){
    return (a+b);
}
int main(){
    int a;
    int b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the sum of two  numbers are :"<< sum(a,b);
    return 0;
}