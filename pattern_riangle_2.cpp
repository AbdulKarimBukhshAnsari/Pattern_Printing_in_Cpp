#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int num = 1;
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<num<<" "; //we cant print i or j because j related to column and i related to row which will not according to our desired output
    }
  cout<<"\n";
  num=num+1;//at every end of outer loop it would be increased by 1
  }
}