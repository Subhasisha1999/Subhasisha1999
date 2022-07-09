#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,ans;
    cout<<"Enter the number : ";
    cin>>x;
    //why you add 0.5 because pow(5,2) gives 24 ans
   // ans=(0.5)+pow(x,2);
    ans=x*x;
    //but when it is the maximum number which exceeds our range.
    cout<<"the square of number is : "<<ans;
    return 0;
}