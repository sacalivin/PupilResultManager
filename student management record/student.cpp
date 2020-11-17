#include "Student.h"
#include<iostream>
using namespace std;


Student::Student()
{
    //setStudentDetails();
    //ctor
}

Student::~Student()
{
    //dtor
}
Student::Student(string studentNames, string regnumber) // costructer with parameters
{

    name =studentNames;
    regNum = regnumber;
}

void Student::setStudentDetails() // set the name and regnum o students
{

    cout<<"Student RegNum =";
    cin>>regNum;
    cout<<"Student Name =";
    cin>>name;

}
string Student::getRegNum()
{
    return regNum;
}
void Student::getStudentDetails() //dispalay the infromation recorded about the student
{
    cout<< "This is the information about\n";
    cout<<" name: " << name<<endl;
    cout<<" RegNum: " << regNum <<endl;
    getMarks();
    cout<<"the total mark is " << marks;
}
