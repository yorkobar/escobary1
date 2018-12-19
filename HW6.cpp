// function Defenitions

#include"HW6.h"

userdata::userdata(){
        newzip = 0;
}
userdata::userdata(string name, string blood, int zip){
  newName = name;
  newBlood = Blood;
  newZip = zip;

}

userdata::~userdata(){

}

string userdata::getName() const{
  return newName;
}

string userdata::getBlood() const{
  return newBlood;
}

int userdata:: getZip() const{
  return newZip;
}

void userdate:: setName(string name){
  newName = name;
}

void userdata:: setBlood(string blood){
  newBlood = blood;
}
void userdata:: setZip(int zip){
  newZip = zip;
}
