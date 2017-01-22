/******************************************************************************
// File Name:     animal.cpp
//
// DESCRIPTION:   Holds the constructor and destructor for the parent class.
//                Also has its own displaydata function.
//
*****************************************************************************/

#include "header.h"

animal::animal()
{
  strcpy(sound, "None");
  // Animals set to not fly on default.
  data = data | 0x00;
  // Animals set to 4 legs on default.
  data = data | 0x04;
}

animal::~animal()
{
  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|    Deleting animal instance sound and data    |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  delete (sound);
  delete (&data);
}

void animal::displaydata()
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
  cout << "| Animal's sound: " << sound << endl;
  cout << "| Animal's number of legs: " << legs << endl;
  cout << "| Animal's ability to fly: " << fly << endl;
  cout << "+-----------------------------------------------+" << endl;
}
