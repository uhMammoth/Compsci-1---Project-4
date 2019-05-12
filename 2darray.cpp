#include <iostream>
#include <cstdio>
using namespace std;

bool initializer(int a[][5],bool first);

int main(){

  bool firstRun = true;
  int array[5][5];
  firstRun = initializer(array, firstRun);

  cout<<endl;

  for(int i=0;i<5;i++){
    for(int j=0; j<5;j++){
      cout<<array[i][j];
    }
    cout<<endl;
  }  

  cout<<firstRun;  
  return 0;
}

bool initializer(int a[][5],bool first){
  for(int i=0;i<5;i++){
    for(int j=0; j<5;j++){
      if(first==false){

      }
      else if(first==true){
        a[i][j] = 1;
        cout<<a[i][j];
      }
    }
    cout<<endl;
  }
  first=false;
  return first;
}
