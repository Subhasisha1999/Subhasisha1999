#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,ans;
    cout<<"Enter the number : ";
    cin>>x; 
    // in built function
    //ans=sqrt(x);
    for(int i=1;i<=x;i++){
        ans=i*i;
        if(ans>x){
            cout<<"there is no square root."<<endl;
            break;
        }
        else if(ans==x){
            cout<<"the square root of the number is : "<<i;
            break;
        }
    }
    return 0;
}