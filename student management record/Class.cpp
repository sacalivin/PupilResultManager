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

void Class::setStudentList(map<string,Student> *s)
{
    pStudents = s;
}
void Class::AddStudent()
{
    cout<<"coming soon\n";
}
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


    for(pupil : *pStudents)
    {
        Student s = (Student)pupil.second;
        s.getStudentDetails();
        cout<<"\n\n\n";
    }
}
