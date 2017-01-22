/******************************************************************************
// File Name:     horse.cpp
//
// DESCRIPTION:   Holds the constructor and destructor for the child class.
//                Also has its own displaydata function.
//
*****************************************************************************/

#include "header.h"

horse::horse()
{
  strcpy(sound, "Nay");
  // Make sure data is zeroed out.
  data = 0x00;
  // Horses cannot fly.
  data = data | 0x00;
  // Horses have 4 legs.
  data = data | 0x04;
}

horse::~horse()
{
  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|     Deleting horse instance sound and data    |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  delete (sound);
  delete (&data);
}

void horse::displaydata()
{
  string fly = "No";
  unsigned int legs;

  // Only right-most bit is flight.
  if ((data & 0x01) == 0x01)
  {
    fly = "Yes";
  }

  // Rest of bits are total legs.
  legs = data & 0x0e;

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "| Horse's sound: " << sound << endl;
  cout << "| Horse's number of legs: " << legs << endl;
  cout << "| Horse's ability to fly: " << fly << endl;
  cout << "+-----------------------------------------------+" << endl;
}
