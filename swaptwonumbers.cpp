#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"before the numbers are :   " <<a <<"  and "<<b<<endl ;
    //without using 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping the numbers are :   " <<a <<"   and  "<< b <<endl;
    //using 3rd variable
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping the numbers are :   " <<a <<"   and  "<< b ;
    return 0;

}