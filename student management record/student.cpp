#include "Student.h"
#include<iostream>
using namespace std;


Student::Student()
{
    //setStudentDetails();
    //ctor
    //marks =0;
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
    string lastName ="";
    //
    cin>>name;

    // if three names are passed then get the other name.
    getline(cin,lastName);

    // join the two names.
    name += lastName;

}
string Student::getRegNum()
{
    return regNum;
}

//display the information recorded about the student
void Student::getStudentDetails()
{
    cout<< "This is the information about\n";
    cout<<" name: " << name<<endl;
    cout<<" RegNum: " << regNum <<endl;
    getMarks();
    cout<<"the total mark is " << marks;
}
