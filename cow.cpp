/******************************************************************************
// File Name:     cow.cpp
//
// DESCRIPTION:   Holds the constructor and destructor for the child class.
//                Also has its own displaydata function.
//
*****************************************************************************/

#include "header.h"

cow::cow()
{
  strcpy(sound, "Moo");
  // Make sure data is zeroed out.
  data = 0x00;
  // Cows cannot fly.
  data = data | 0x00;
  // Cows have 4 legs.
  data = data | 0x04;
}

cow::~cow()
{
  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|      Deleting cow instance sound and data     |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  delete (sound);
  delete (&data);
}

void cow::displaydata()
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
  cout << "| Cow's sound: " << sound << endl;
  cout << "| Cow's number of legs: " << legs << endl;
  cout << "| Cow's ability to fly: " << fly << endl;
  cout << "+-----------------------------------------------+" << endl;
}
