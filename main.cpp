/******************************************************************************
//
// NAME:          Blake Larson
//
// HOMEWORK:      10
//
// CLASS:         ICS 212
//
// INSTRUCTOR:    Ravi Narayan
//
// DATE:          December 8, 2016
//
// FILE:          main.cpp
//
// DESCRIPTION:   This file contains the displayAnimalData function and main.
//
*****************************************************************************/

#include "header.h"
#include <vector>
#include <map>

void displayAnimalData(animal *a)
{
  a->displaydata();
}

int main(int argc, char* argv[])
{
  // Creating the vector containter for animal.
  vector<animal> myFarm;

  // Creating the map container for animal.
  map<int, animal *> farmLayout;

  // Creating an instance of animal.
  animal instaAnimal;

  // Creating instances of all animals that will be on myFarm.
  cow cowV;
  duck duckV;
  horse horseV;

  // Creating instances of all animals that will be on farmLayout.
  cow cowM;
  duck duckM;
  horse horseM;

  // Changing the size of the vector container to 3.
  myFarm.reserve(3);

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|  Adding all animals to the end of the vector  |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  // Add all animals to the end of the vector.
  myFarm.push_back(cowV);
  myFarm.push_back(duckV);
  myFarm.push_back(horseV);

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|  All animals added to myFarm vector container |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|  Printing out the number of animals in myZoo  |" << endl;
  cout << "|  " << myFarm.size() << endl;
  cout << "+-----------------------------------------------+" << endl;

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|       Printing out the animal instance        |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  instaAnimal.displaydata();

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|Printing out the cow, duck, and horse instances|" << endl;
  cout << "+-----------------------------------------------+" << endl;

  cowV.displaydata();
  duckV.displaydata();
  horseV.displaydata();

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|  Printing out cow, duck, and horse via vector |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  myFarm[0].displaydata();
  myFarm[1].displaydata();
  myFarm[2].displaydata();

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|   Printing out cow, duck, and horse via map   |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  farmLayout[0] = &cowM;
  farmLayout[1] = &duckM;
  farmLayout[2] = &horseM;

  farmLayout[0]->displaydata();
  farmLayout[1]->displaydata();
  farmLayout[2]->displaydata();

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|   Cow, duck, and horse via displayAnimalData  |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  displayAnimalData(&cowV);
  displayAnimalData(&duckV);
  displayAnimalData(&horseV);

  cout << "" << endl;
  cout << "+-----------------------------------------------+" << endl;
  cout << "|             End of polymorphism test          |" << endl;
  cout << "+-----------------------------------------------+" << endl;

  return 0;
}
