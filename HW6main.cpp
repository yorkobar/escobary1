#include <iostream>
#include <string>


#include "HW6.h"

using namespace std;
int main(){

  string name;
  int zip;
  string blood;
  cout<< "Enter your name.";
  cin>> name;
  cout<<"Enter Blood type.";
  cin>> blood;
  cout<<"What is your Zip code?";
  cin >> zip;

  userdata Patient_1(name, blood, zip);

  cout<< "Patient name: " << Patient_1.getName() << endl <<
          "Blood: " << Patient_1.getBlood() << endl <<
          "zip code: " << Patient_1.getZip() << endl;

  userdata Patient_2;

  Patient_2.setName(name);
  Patient_2.setBlood(blood);
  Patient_2.setZip(zip);

  return 0;
}
