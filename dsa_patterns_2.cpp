#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i=0;i<n;i++){
    int k=0;
    while (k<n-i-1)
        {
           cout<<" ";
           k++;
        }
    for (int j=0;j<=i;j++){
        
        
        
        cout<<"*"<<" ";
    }
    cout<<endl;
}
}