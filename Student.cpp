#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid, const char n[]) {
  studentID = sid;
  strcpy_s(name,n);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentID <<endl;
  cout << "Student Name : " << name << endl;
}
