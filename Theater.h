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
    theater(string, int);
    bool initializer();
    void getQty();
    void seatSelect();
    void priceTotal();
};
