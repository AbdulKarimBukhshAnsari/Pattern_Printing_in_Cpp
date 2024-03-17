#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter number of rows: ";
  cin>>m; 
  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++) {
      if (i==1 and (j==1 or j==m)) {
        cout<<"* ";
      }
      else if (j==1 and (i==1 or i==m )) cout<<"* ";
      else if (i!=1 and j!=1 and (i%j==0 or j%i==0)) cout<<"* ";
      else cout<<"  ";
    }
  cout<<endl;
  }
}