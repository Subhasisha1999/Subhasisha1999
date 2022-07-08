#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three side of triangle : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<" the triangle is valid "<<endl;
    }
    else{
        cout<<" the triangle is invalid   "<<endl;
    }
    return 0;

}