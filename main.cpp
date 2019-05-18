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

int returnShowtime(string);
int fileSeats(string);

int main(){
  string userInput;
  int showTime;
  char tempArray[9][15];
  int position;

  fstream file("seating.txt");
  if(!file){
    cout << "error reading file.";
    return -1;
  }

  cout<<"************************************\n";
  cout<<"Welcome to the Cheapy Theater!\n";
  cout<<"************************************\n\n";
  cout<<"Avengers: End Game(EndGame) at 12pm\nSonic(Sonic) at 6pm\nspiderman: far from home(Spiderman) at 9pm\n\n";
  cout << "Enter the title of the film you would like to watch: ";
  cin>>userInput; cout<<endl;
  position = fileSeats(userInput);//use movie title to match position of seats saved to file
  file.seekg(position, file.cur);//set file position
  for(int i = 0; i<9; i++){
    for(int j=0;j<15;j++){
        file >> tempArray[i][j];
  }
  }file.close();//read from file to temp array
  showTime = returnShowtime(userInput);//sync movie title with showtime
  theater uTheater(userInput, showTime);//create object
  uTheater.tempToObject(tempArray);//move data from temp array to object 
  cout << "These are the available seats for " << userInput << " \n\n" << endl;
  uTheater.initializer();//print array
  uTheater.getQty();
  uTheater.seatSelect();//takes quantity and gets that many tickets
  uTheater.initializer();//prints new array showing reserved seats
  uTheater.priceTotal();
  uTheater.seatsToPublic();
  cout<<"Thank you for your purchase! Enjoy the Show!";
  //output to file
  file.open("seating.txt");
  file.seekp(position, file.cur);
  for(int i=0;i<9;i++){
    for(int j=0;j<15;j++){
        tempArray[i][j]= uTheater.publicSeats[i][j];
        file<<tempArray[i][j];
    }   
  }
  return 0;
}
int fileSeats(string a){
  int position;
  if(a=="EndGame"){return 0;}
  else if(a=="Sonic"){return 135;}
  else if(a=="Spiderman"){return 270;}
  return 0;
}
int returnShowtime(string u){
  int time;
  if(u=="EndGame"){
    time=1200;
  }
  else if(u=="Sonic"){
    time=1800;
  }
  else if(u=="Spiderman"){
    time=2100;
  }
  return time;
}
