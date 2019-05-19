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
