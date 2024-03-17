#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int num = n; //declare the highest number to this variable 
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num-=1; //at every column the value should be lesser the previous column
    }
  num =n; //at every new row thw value should be start from the highest value.
  cout<<"\n";
  }
}