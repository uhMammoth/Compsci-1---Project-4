#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <iomanip>
#include "Theater.h"
using namespace std;

int returnShowtime(string);

int main(){
  string userInput;
  int showTime;
  cout<<"welcome\n\n";
  cout<<"Avengers: End Game(EndGame) at 12pm, Sonic(Sonic) at 6pm, spiderman: far from home(Spiderman) at 9pm\n";cin>>userInput;  
  
  showTime = returnShowtime(userInput);
  theater uTheater(userInput, showTime);
  uTheater.initializer();
  uTheater.getQty();
  uTheater.seatSelect();
  uTheater.initializer();
  uTheater.priceTotal();
  cout<<"Thank you for your purchase! Enjoy the Show!";
  
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
