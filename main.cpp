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

int main() {
  hey user :
  premium
  if user premium{
    Theater a(18)
  }
}
