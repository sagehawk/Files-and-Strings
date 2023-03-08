#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
public: 
    string Name;
    long Id;
    double Gpa;
    char Grade;


    
    void read(ifstream& is)
    {
      string numbers = "0123456789";
      string name;
      string temp;
     
      char ch = is.peek();
      while (numbers.find(ch)==string::npos)
      {
           is >> name;
      }
      //cout << temp << endl;
      Name = temp;
      is >> Id;
      is >> Gpa;
      is >> Grade;  
    }

    void dump()
    {
       cout << "Name: " << Name << endl;
       cout << "Id: " << Id << endl;
      cout << "GPA: " << Gpa << endl;
      cout << "Grade: " << Grade << "\n" << endl;
    }

    void write(ofstream os)
    {
      
    }
};