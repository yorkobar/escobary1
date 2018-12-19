// Header ==> function declarations

#include<iostream>
#include<string>

using namespace std;

#ifndef HW6_H
#define HW6_H

class userdata{
public:
    // default constructor
    userdata();

    // overload constructor
    userdata(string, string, int);

    // destructor
    ~userdata();

    // accessor functions
    string getName() const;
      // getName--> displays name of person
    string getBlood() const;
     int getZip() const;
     // mutator functions
     void setName(string);
     void setBlood(string);
     void setZip(int);
          // sets name of patient, param --> string
private:
    // member variables
    string newName;
    string newBlood;
    int newzip;
};

#endif
