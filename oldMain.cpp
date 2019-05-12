#include <iostream>
using namespace std;

class Theater{
  private:
    char seats[][];
    int userQtySeats;
    int moviePrice;
    string movieTitle[4];
    char userSeatPick[][];
    int showingTime[4];

  public:
    Theater();//set number of seats in default theater
    void initialize(int cusPrice, char cusSeatPick[][], string cusMovie, int cusTime);
    void getSeat();
    bool availableSeat(char userSeatPick);
    void getTitle();
    void getPrice();
    void getTime();
};
Theater::Theater(){
  for(int i=0;i<15;i++){
    for(int j=0;j<30;j++){
     seats[i][j]={'o'};
    }
  }
  
  movieTitle[0]="End Game";
  movieTitle[1]="Spiderman";
  movieTitle[2]="Sonic";
  movieTitle[3]="Detective Pikachu";
  moviePrice = 12;
  showingTime[0]=1300;
  showingTime[1]=1430;
  showingTime[2]=1630;
  showingTime[3]=1845;
  userSeatPick[15][30]={'o'};
  return;
}
Theater::Theater(int price){
  for(int i=0;i<9;i++){
    for(int j=0;j<15;j++){
     seats[i][j]={'o'};
    }
  }
}
void Theater::initialize(int cusPrice, int cusSeatPick, string cusMovie, int cusTime){
  moviePrice = cusPrice;
  userSeatPick = cusSeatPick;
  /*movieTitle = cusMovie;*/
  /*showingTime = cusTime;*/

}

Theater::Theater(int price){

  for(int i=0;i<9;i++){

    for(int j=0;j<15;j++){

     seats[i][j]={'o'};
    }
  }
}

int Theater:: getPrice(){
  return moviePrice;

}

bool Theater::availableSeat(char userSeatPick){
  if (userSeatPick == available){
    return true;
  }
  else{
    return false;
  }
}

string Theater::getTitle(){
  return movieTitle[];
}

int Theater::getTime(){
  return showingTime;
}

char Theater:: getSeat(){
  return userSeatPick;
}

//just me trying to figure some stuff out ^^

int main() {
  //HEY GUYS, I ADDED THE BELOW LINES AS PART OF OUR PSEUDOCODE.
  //LET ME KNOW IF THIS IS THE DIRECTION WE WANT TO GO
  //WE CAN ALWAYS MODIFY AS NEEDED
  
  cout << endl << "****************************************************";
  cout << endl << "~~~~~~~~~~ Welcome to the Chaffey Theatre ~~~~~~~~~~";
  cout << endl << "****************************************************";
  cout << endl << endl << "The current listings and showtimes are: ";
  //displays the current listings and showtimes

  //prompt the user for an upgraded experience or standard seating
  cout << endl << "Would you like to upgrade your tickets for an enhanced experience?";
  cout << endl << "($10 upgrade charge per ticket)";
  //cin >> [input variable for preferred seating ];

  //prompts the user for the amount of tickets to purchase
  cout << endl << "How many tickets would you like to buy?";
  // cin << [variable for tickets to purchase and seats to be occupied in the array];


  //displays the current seating arrangement and available seats


  //Perhaps we could start with a file that has a few occupied seats to show program modularity
  //and display what's available for purchase

  
  //receive input from the user, requesting an available seat

  
  //run a function to check to see if the seat is available
    //if it is not available, provide feedback to choose another seat

    //if it is available, provide feedback and confirm seat assignment

    
  //prompt for the next ticket and seating arrangement
  //run the function again to see if the seat is available and provide feedback

  
  //once the seating arrangements are finalized provide a breakdown of
  //the amount of tickets purchased, to which movie and showtime

  
  //save the new seating arrangement to a file

  //exit the program and offer a greeting to enjoy the movie
  
  
  
  
  hey user :
  premium
  if user premium{
    Theater a(18)
      a.f1
      a.f2
      a.print
  }
}
