#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter number of rows: ";
  cin>>m;
  for(int i=1;i<=m;i++){  //this loop is for row as we know so it will start from highest value and it will end till the last value. and there would be decrement.
    for(int j=1;j<=m-i;j++) { //at here we started from 1 and end on i that means if i is 5 than this loop would be executed 5 times .
      cout<<"  ";
    }
    for (int j=1;j<=i;j++) cout<<"* ";
  cout<<endl;
  }
}