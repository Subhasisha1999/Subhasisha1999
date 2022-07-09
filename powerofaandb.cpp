#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int main(){
    int a,b,ans=1;
    cout<<"enter the value of a and b : "<<endl;
    cin>>a>>b;
    //in built function
   int num=pow(a,b);
   cout<<"the power of a and b is : "<<num<<endl;
    //user create this
    while(b>0){
        ans=ans*a;
        if(ans>INT_MAX){
            return 0;
        }
        b--;
    }
    cout<<"the power of a and b is : "<<ans;
    return 0;
}