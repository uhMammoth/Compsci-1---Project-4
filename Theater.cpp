//Files: main.cpp, Theater.cpp, Theater.h, seating.txt
//Name: Kyle Petty, Ashley Calderon, Wilson Garcia
//Date: 05/17/2019
//Course: COMPSCI 1
//Description:This program is being developed to incorporate everything we have learned in computer science course 1 into a program.
//            The objective of this program is to allow user input to reserve seating for a movie theater showing.
//            Requirements include: using OOP, file input/output, user input.
//Usage: Movie Ticket System

#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <iomanip>
#include <Theater.h>
using namespace std;

theater::theater(string a, int x){
  movie = a;
  showtime = x;
  price = 12.50;
  firstRun = true;
  seatQty = 0;
}
void theater::seatsToPublic(){
  for(int i=0;i<9;i++){
      for(int j=0;j<15;j++){
        publicSeats[i][j] = seats[i][j];
    }
  }
}
void theater::tempToObject(char array[][15]){
  for(int i=0;i<9;i++){
      for(int j=0;j<15;j++){
        seats[i][j] = array[i][j];
    }
  }
  return;
}
void theater::priceTotal(){
  price *= seatQty;
  cout << "************************" << endl;
  cout << setw(10) << left << "Movie:" << setw(10) << right << movie << endl;
  cout << setw(10) << left << "Showtime:" << setw(10) << right << showtime << endl;
  cout << setw(10) << left << "Seats: " << setw(10) << right << seatQty << endl;
  cout << setw(10) << left << "Total: " << setw(10) << right <<fixed<<setprecision(2) << price << endl;
  cout << "************************" << endl;
  return;
}
void theater::seatSelect(){
  for(int i=0;i<seatQty;i++){
    int r, c;
    do{
      cout<<"Enter empty seat row and column to reserve(EX: 1 2): ";
      cin>>r;cin>>c;
    }while(seats[r-1][c-1] == 'X');
    seats[r-1][c-1]= 'X';
  }
  cout<<endl;
}
void theater::getQty(){
  cout<<"\nEnter number of tickets you wish to purchase: ";cin>>seatQty;
}
void theater::initializer(){
  cout<<"\t\t";
  for(int i=0;i<15;i++){//column header
    if(i==5||i==10){
      cout<<setw(5)<<right<<i+1;  
    }
    else {
      cout<<setw(3)<<right<<i+1;
    }
  }
  cout<<"\n\n";
  for(int i=0;i<9;i++){
    cout<<"Row "<<i+1<<"\t";//rows column header
    for(int j=0; j<15;j++){
      if(j==5||j==10){
        cout<<setw(5)<<right<<seats[i][j];
      }
      else{
        cout<<setw(3)<<right<<seats[i][j];
      }
    }
    cout<<endl;
    if((i==2)||(i==5)){
      cout<<"\n";
    }
  }
  return;
}
