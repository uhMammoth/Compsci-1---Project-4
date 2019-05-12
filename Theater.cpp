#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <iomanip>
#include "Theater.h"
using namespace std;

theater::theater(string a, int x){
  movie = a;
  showtime = x;
  price = 12.50;
  firstRun = true;
  seatQty = 0;
}
void theater::priceTotal(){
  price *= seatQty;
  cout<<"The total comes out to: "<<price<<endl;
}
void theater::seatSelect(){
  for(int i=0;i<seatQty;i++){
    int r, c;
    cout<<"Enter seat row and column to reserve: ";
    cin>>r;cin>>c;
    seats[r-1][c-1]= 'X';
  }
}
void theater::getQty(){
  cout<<"\nEnter number of tickets you wish to purchase: ";cin>>seatQty;
}
bool theater::initializer(){
  cout<<"\t\t";
  for(int i=0;i<15;i++){
    if(i==5||i==10){
      cout<<setw(5)<<right<<i+1;  
    }
    else {
      cout<<setw(3)<<right<<i+1;
    }
  }
  cout<<"\n\n";
  for(int i=0;i<9;i++){
    cout<<"Row "<<i+1<<"\t";
    for(int j=0; j<15;j++){
      if(firstRun==false){
        if(j==5||j==10){
          cout<<setw(5)<<right<<seats[i][j];
        }
        else{
          cout<<setw(3)<<right<<seats[i][j];
        }
      }
      else if(firstRun==true){
        seats[i][j] = '-';
        if(j==5||j==10){
          cout<<setw(5)<<right<<seats[i][j];
        }
        else{
          cout<<setw(3)<<right<<seats[i][j];
        }
      }
    }
    cout<<endl;
    if((i==2)||(i==5)){
      cout<<"\n";
    }
  }
  firstRun=false;
  return firstRun;
}
