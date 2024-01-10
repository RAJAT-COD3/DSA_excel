#include <iostream>
using namespace std;
#include<math.h>
int main(){
int n;
cin>>n;
bool a=0;
while(n!=0 && n>1){
    if(n%2==1) {a=1;break;}
    n=n/2;
}
if(a==0){cout<<"multiple of 2";}
else if(a==1) {cout<<"not a multiple of 2";}

}