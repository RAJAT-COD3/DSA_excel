#include<iostream>
using namespace  std;
#define lint long long int
int main(){

int b;
cin>>b;
for(int i=0;i<b;i++){

    string v;
    cin>>v;
    int n = v.length();
    int m=0,a=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){k=k+1; continue;}
        else {m=m+k; a=a+((k)*(k+1));k=0;}

    }
    if(a==0){a=1;}
    cout<<m<<" "<<a<<endl;

}
}
