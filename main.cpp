// Grade: 10/10
//***************************************************************************
//
// Sajjad Haq
// H00803115
// CSC 122 COMPUTER SCIENCE II (62339)
//
// I certify that this is my own work and where appropriate an extension of the
// starter code provided for the assignment.
//
//***************************************************************************
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// Store student records
class Student {
public:
  string name;
  int id;
  float gpa;
  char grade;
};

int main() {
  // Open the input file
  ifstream inFile;
  string inputFileName;
  cout << "Please enter the name of your data file: ";
  cin >> inputFileName;
  inFile.open(inputFileName);
  while (inFile.fail()) {
    cout << "I'm sorry, I could not open '" << inputFileName << "'.\n";
    cout << "Please enter another name: ";
    cin >> inputFileName;
    inFile.open(inputFileName);
  }

  // Open the output file
  ofstream outFile;
  string outputFileName;
  cout << "Please enter the name of the destination file: ";
  cin >> outputFileName;
  outFile.open(outputFileName);
  while (outFile.fail()) {
    cout << "I'm sorry, I could not open '" << outputFileName << "'.\n";
    cout << "Please enter another name: ";
    cin >> outputFileName;
    outFile.open(outputFileName);
  }

  // Read input file and store it into a student vector
  vector<Student> students;
  Student student;
  string name;
  while (getline(inFile, name)) {
    student.name = name;
    inFile >> student.id >> student.gpa >> student.grade;
    students.push_back(student);
    inFile.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  inFile.close();

  for (Student s : students) {
    outFile << s.name << endl;
    outFile << s.id << " " << s.gpa << " " << s.grade << endl;
  }
  outFile.close();

  cout << "Done copying data!" << endl;

  return 0;
}