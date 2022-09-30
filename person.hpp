#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
  string Name, mm;
  int ID, dd, yy;

public:
  void setID(int Id)
  {
    this->ID = Id;
  }
  void setName(string name)
  {
    this->Name = name;
  }
  void setMonth(string month)
  {
    this->mm = month;
  }
  void setDay(int day)
  {
    this->dd = day;
  }
  void setYear(int year)
  {
    this->yy = year;
  }

  int getID()
  {
    return this->ID;
  }
  string getName()
  {
    return this->Name;
  }
  int getDay()
  {
    return this->dd;
  }
  string getMonth()
  {
    return this->mm;
  }
  int getYear()
  {
    return this->yy;
  }

  Person(int Id, string name, int day, string month, int year)
  {
    ID = Id;
    Name = name;
    dd = day;
    mm = month;
    yy = year;
  };
};

#endif