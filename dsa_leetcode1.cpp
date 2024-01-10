#include <iostream>
using namespace std;
int main(){
    int n;
    bool a=0;
    cin>>n;int ans=0;
    while(n!=0){
        if(ans>INT32_MAX/10 || ans<INT32_MIN/10){cout<<0; a=1;}
        ans=ans*10+(n%10);
        n=n/10;
    }
    if(a==0)
    cout<<ans;

}