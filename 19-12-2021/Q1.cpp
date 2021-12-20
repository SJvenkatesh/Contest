#include<bits/stdc++.h>
using namespace std;
int setNo(int arr[],int n,int s){
    int i=0;
for(i=0;i<n;i++){
  if(arr[i]==s){
      return i;
  }else if(arr[i]>s){
      return i;
  }


}
return i;
}
int main(){
int n;
cin>>n;
int arr[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s;
cin>>s;
cout<<setNo(arr,n,s);

}