#include "Class.h"
#include<iostream>
#include<map>
#include<string>

Class::Class()
{
    //ctor
}

Class::~Class()
{
    //dtor
}

// sets a pointer to a list of students the student list and sets it in this class
void Class::setStudentList(map<string,Student> *s)
{
    pStudents = s; // get address of the created list
}
// should be removed as the list is pointed to updates occur automatically
void Class::AddStudent()
{
    cout<<"coming soon\n";
}

// displays a list of students in the class
void Class::checkList()
{

    pair <string,Student> pupil;
    if(pStudents->empty())
    {
        cout<<"The class has zero members \n";
    }
    else
    {
        totalStudents = pStudents->size(); // find the size of the map = number of students
        cout<<"There are "<< totalStudents<< " pupil(s)\n";
        cout << "The following are the student \n";
    }


    for(pupil:*pStudents)
    {
        Student s = (Student)pupil.second; // gets the student
        s.getStudentDetails();
        cout<<"\n\n\n";
    }
}
