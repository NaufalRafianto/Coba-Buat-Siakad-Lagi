#ifndef __SISWA_HPP__
#define __SISWA_HPP__

#include <iostream>
#include <string>

#include "person.hpp"

using namespace std;
class Student : public Person
{
private:
  string NRP;
  string Department;
  int yearEntry;
  int Semester;
  // float ips[] = {};
  // float ipk;

public:
  void setDepartment(string department)
  {
    this->Department = department;
  }
  void setNRP(string Nrp)
  {
    this->NRP = Nrp;
  }
  void setYearEntry(int YearEntry)
  {
    this->yearEntry = YearEntry;
  }
  void setSemester(int semester)
  {
    this->Semester = semester;
  }
  // void setIPS(float ipSem, int sem)
  // {
  //   float IPS[] = {}
  //   for (int i = 0; i <= this->Semester; i++)
  //   {
  //     this->ips[i] = IPS;
  //   }
  // }
  // void setIPK(float IPK)
  // {
  //   this->ipk = IPK;
  // }

  string getNRP()
  {
    return this->NRP;
  }
  string getDepartment()
  {
    return this->Department;
  }

  int getYearEntry()
  {
    return this->yearEntry;
  }
  int getSemester()
  {
    return this->Semester;
  }

  // float getIPS()
  // {
  //   return this->ips;
  // }
  // float getIPK()
  // {
  //   return this->ipk;
  // }

  Student(int Id, string name, int day, string month, int year, string Nrp, string department, int YearEntry, int semester) : Person(Id, name, day, month, year)
  {
    NRP = Nrp;
    Department = department;
    yearEntry = YearEntry;
    Semester = semester;
    // ips = IPS;
    // ipk = IPK;
  }
};

#endif