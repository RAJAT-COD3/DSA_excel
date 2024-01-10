#include<iostream>
using namespace  std;
#define lint long long int
int main(){

int b;
cin>>b;
for(int i=0;i<b;i++){

    int n;
    cin>>n;
    int s[n],e[n];
    for(int i=0;i<n;i++){
        cin>>s[i]>>e[i];

    }
    int k=1;
    int w=s[0];
    for(int i=0;i<n;i++){
        if (e[i]>=e[0] && s[i]>=w){
             k=0;
        }}
        if (k==0){cout<<-1<<endl;}
        else {cout<<w<<endl;}
    




}}