#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter number of rows: ";
  cin>>m;
  int number =1; //initializing the number.
  for(int i=1;i<=m;i++){
       int num =number; //as we know in every row we have to switch that's why in inner loop we are declaring again and again.
    for(int j=1;j<=i;j++) {
      cout<<num<<" ";
      if(num==0) num+=1;//as after every column we have to change the value of num.
      else num-=1;
    }
  if(number==0) number+=1; //changing the value of every number for each row.
  else number-=1;
  cout<<endl;
  }
}