#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter number of rows: ";
  cin>>m; 
  for(int i=1;i<=m;i++){
    for(int j=0;j<=m-i;j++) cout<<"  "; //it will print wide spaces before the rhombus. 
    for(int j=1;j<=m;j++) {
      cout<<"* ";
    }
  cout<<endl;
  }
}