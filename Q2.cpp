#include<bits/stdc++.h>
using namespace std;
bool isSp(vector<vector<int>> &mat,int c,int r,int i,int j){


for(int ind=0;ind<r;ind++){
      if(ind!=i&&mat[ind][j]==1){
          return false;
      }
}

for(int ind=0;ind<c;ind++){
      if(ind!=j&&mat[i][ind]==1){
          return false;
      }
}
return true;
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
for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
       if(mat[i][j]&&isSp(mat,c,r,i,j)){

           cout<<i<<", "<<j<<endl;
       }
   }
}
return 0;
}