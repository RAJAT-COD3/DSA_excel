#include <iostream>
using namespace std;
#include<math.h>
int main(){

int n;
cin>>n;
int a=n;
int mask=0,count=0;
while(n!=0){
    n=n>>1;
    count++;
}
for(int i=0;i<count;i++){
    mask=mask+pow(2,i);
}
n=mask&(~a);
cout<<n;
}