#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int num =1; //declare the variable which will print desired output.
  for(int i=1;i<=(n/2)+1;i++){ //the condition is changed because if we wanna run the looop till the required number than we can do so by this condition.
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num=num+2;
    }
  num=1; //after the end of any raw the num will start again.
  cout<<"\n";
  }
}