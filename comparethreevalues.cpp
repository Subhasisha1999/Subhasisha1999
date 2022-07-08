#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b : "<<endl;
    cin>>b;
    cout<<"enter the value of c : "<<endl;
    cin>>c;
   if(a>b){
        if(a>c){
        cout<<" the value a is greater "<<endl;
        }
    }
    else{ 
        if(b>c){
        cout<<" the value b is greater  "<<endl;
    }
    else{
        cout<<" the value c is greater  "<<endl;
    }
    }
     
    return 0;
}