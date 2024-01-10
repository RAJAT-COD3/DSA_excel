#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by the inner loop, then break
        if (swapped == false)
            break;
    }
}

int main() {
    int b;
    cin >> b;

    for (int t = 0; t < b; t++) {
        int n, m;
        long long int k;
        cin >> n >> m >> k;

        int j[n];
        int g[m];

        for (int i = 0; i < n; i++) {
            cin >> j[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> g[i];
        }

        bubbleSort(j, n);
        bubbleSort(g, m);

       if(k%2==1){
        if(j[0]<g[m-1]){
    int t=j[0];
  j[0]=g[m-1];}
  int sum =0;
   for(int i=0;i<n;i++)
   {
    sum=sum+j[i];//Calculating sum
   }
   cout<<sum<<endl;
}
if(k%2==0){if(j[0]<g[m-1]){
    int t=j[0];
    j[0]=g[m-1];
    g[m-1]=t;}
    bubbleSort(j,n);
bubbleSort(g,m);
if(g[0]<j[n-1]){
int a=g[0];
    g[0]=j[n-1];
    j[n-1]=a;}
    int sum =0;
   for(int i=0;i<n;i++)
   {
    sum=sum+j[i];//Calculating sum
   }
   cout<<sum<<endl;
}

    }
}