/******************************************************************************
// File Name:     duck.cpp
//
// DESCRIPTION:   Holds the constructor and destructor for the child class.
//                Also has its own displaydata function.
//
*****************************************************************************/

#include "header.h"

duck::duck()
{
  strcpy(sound, "Quack");
  // Make sure data is zeroed out.
  data = 0x00;
  // Ducks can fly.
  data = data | 0x01;
  // Ducks have 2 legs.
  data = data | 0x02;
}

duck::~duck()
{
  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|     Deleting duck instance sound and data     |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  delete (sound);
  delete (&data);
}

void duck::displaydata()
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
  cout << "| Duck's sound: " << sound << endl;
  cout << "| Duck's number of legs: " << legs << endl;
  cout << "| Duck's ability to fly: " << fly << endl;
  cout << "+-----------------------------------------------+" << endl;
}
