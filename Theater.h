#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class theater{
  private:
    string movie;
    int showtime;
    double price;
    char seats[9][15];
    bool firstRun;
    int seatQty;
    
  public:
    char publicSeats[9][15];
    theater(string, int);
    void initializer();
    void getQty();
    void seatSelect();
    void priceTotal();
    void tempToObject(char array[][15]);
    void seatsToPublic();
};
