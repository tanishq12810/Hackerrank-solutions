#include<iostream>

using namespace std;

int main(){
  int a[3],b[3],i,j,k;
  int al=0;
  int bo=0;
  for(i=0;i<3;i++){
    cin>>a[i];
  }
  for(j=0;j<3;j++){
    cin>>b[j];
  }
  for(k=0;k<3;k++){
    if(a[k]>b[k]){
      al++;
    }
    else if(a[k]<b[k]){
      bo++;
    }
  }
  cout<<al<<" "<<bo<<endl;
}
