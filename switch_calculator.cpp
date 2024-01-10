#include <iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cin>>n;
    switch (1){
    case 1 : cout<<"notes of 500 = "<<n/500<<endl; n=n-500*(n/500);
    case 2 : cout<<"notes of 100 = "<<(n/100)<<endl; n=n-100*(n/100);
     cout<<"notes of 50 = "<<(n/50)<<endl; n=n-50*(n/50);
     cout<< "notes of 10 ="<<n/10<<endl; n=n-10*(n/10);

}}