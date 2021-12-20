#include<bits/stdc++.h>
using namespace std;
void reverse(vector<vector<int>> &mat,int r,int c){
int i=0;
int j=c-1;
while(i<j){
    swap(mat[r][i],mat[r][j]);
    i++;
    j--;
}
}
void rotate(vector<vector<int>> &mat,int r,int c){
for(int i=0;i<r;i++){
    for(int j=i;j<c;j++){
        int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;
 //  swap(mat[i][j],mat[j][i]);
    }
}

for(int i=0;i<r;i++){
  reverse(mat,i,c);
   // reverse(mat[i].begin(),mat[i].end());
}
}
bool isEqual(vector<vector<int>> &mat,vector<vector<int>> &target,int r,int c){
    if(mat==target){
    return 1;
}

for(int rot=0;rot<4;rot++){
rotate(mat,r,c);
if(mat==target){
   return 1;
}
}
return 0;
}
int main(){
int r,c;
cin>>r>>c;
vector<vector<int>> mat(r+1,vector<int> (c+1,0));

for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
       cin>>mat[i][j];
   }
}
int r1,c1;
cin>>r1>>c1;
vector<vector<int>> target(r1+1,vector<int> (c1+1,0));
for(int i=0;i<r1;i++){
   for(int j=0;j<c1;j++){
       cin>>target[i][j];
   }
}
if(isEqual(mat,target,r,c)){
    cout<<"true";
}else{
//     int f=0;
//     for(int i=0;i<r1;i++){
//    for(int j=0;j<c1;j++){
//        if(mat[i][j]!=target[i][j]){
//            f=1;
//            break;
//        }
//    }
// }
// if(f){
    cout<<"false";
    // }else{
    //     cout<<"true";
    // }
}
return 0;
}