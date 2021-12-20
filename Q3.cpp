#include<bits/stdc++.h>
using namespace std;
int separtPos(vector<int> &arr,int n){

int j=0,i;
for(i=0;i<n;i++){
if(arr[i]<=0){
    swap(arr[i],arr[j]);
    j++;
}
}
return j;
}
int missingP(vector<int> &arr,int shift,int n){
   int i;
   for(int i=shift;i<n;i++){
       if(shift+abs(arr[i])-1<n&&arr[shift+abs(arr[i])-1]>0){
           arr[shift+abs(arr[i])-1]=-arr[shift+abs(arr[i])-1];
       }
   }
   for(i=shift;i<n;i++){
       if(arr[i]>0){
           return i+1-shift;
       }
   }
   return n+1-shift;
}
int firstMissingPositive(vector<int>& arr){
    //Write your code here
int n=arr.size();

int shift=separtPos(arr,n);

return missingP(arr,shift,n);

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = firstMissingPositive(arr);
    cout<<res<<endl;
}