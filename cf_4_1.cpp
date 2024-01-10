#include<iostream>
using namespace  std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
  
// Function to print an array

int main(){

int b;
cin>>b;
for(int i=0;i<b;i++){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int b[n];
for(int i=0;i<n;i++){
    b[i]=i+1;

}
int c[n];

int k[n];
for(int a=0;a<n;a++){
for(int i=0;i<n;i++){
    c[i]=arr[i]-b[i];

}
bubbleSort(c,n);

for(int i=0;i<n;i++){
    k[i]=0;

}
for(int i=0;i<n;i++)
{
    if (c[i]==c[i+1]){k[i]++;}
}
int j=b[0];

for(int i=0;i<n-1;i++){
    b[i]=b[i+1];
}
b[n-1]=j;
}

bubbleSort(k,n);
int min=k[0];
int r[n];
for(int i=0;i<n;i++){
    b[i]=i+1;

}
for(int a=0;a<n;a++){
for(int i=0;i<n;i++){
    c[i]=arr[i]-b[i];

}
bubbleSort(c,n);

for(int i=0;i<n;i++){
    r[i]=0;

}
for(int i=0;i<n;i++)
{
    if (c[i]==c[i+1]){r[i]++;}
}
if(r[i]==min){break;}
int j=b[0];

for(int i=0;i<n-1;i++){
    b[i]=b[i+1];
}
b[n-1]=j;
}
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
}

}