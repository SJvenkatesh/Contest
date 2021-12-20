#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
         int len=j-i+1;
         if(len%2!=0){
              for(int ind=i;ind<=j;ind++){
                  sum+=arr[ind];
              }
         }

     }

    }
cout<<sum;
    return 0;
    }