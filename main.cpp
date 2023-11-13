// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Tutorial 12C: Functions and Structs

#include <iostream>
#include "Person.h"
using namespace std;

void getStudent(Person x[], int size);
void displayResults(Person y[], int size);

int main() 
{
  const int SIZE = 3;
  Person CISS[SIZE];

  getStudent(CISS, SIZE);

  
  displayResults(CISS, SIZE);
  return 0;
}

void getStudent(Person x[], int size)
{
  for (int i = 0; i < 3; i++)
    {

        cout << "Student Number " << i + 1 << endl;
        cout << "Name: ";
        cin >> x[i].name;
        cout << "Age: ";
        cin >> x[i].age;
        cout << "Height: ";
        cin >> x[i].height;
        cout << "Eye Color: ";
        cin >> x[i].eyecolor;
        cout << endl;
    }
}

void displayResults(Person y[], int size)
{

  for (int i = 0; i < size; i++)
    {

      cout << "Student # " << i + 1 << " " << y[i].name << ", age = "<< y[i].age << ", your height = "<< y[i].height << ", your eye color = " << y[i].eyecolor << endl;
}
}
