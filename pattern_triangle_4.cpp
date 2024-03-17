#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int num =1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num+=1;
    }
  cout<<"\n"; //There is no need to initialize the value because we dont need to initialize the value.
  }
}