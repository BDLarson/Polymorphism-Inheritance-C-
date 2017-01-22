#ifndef ANIMAL_H
#define ANIMAL_H

class animal
{
  protected:
    char sound[5];
    unsigned int data;

  public:
    animal();
    ~animal();
    virtual void displaydata();
};

#endif
