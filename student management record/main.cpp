#include <iostream>
#include<stdio.h>
#include<vector>
#include<fstream>
#include<vector>
#include<string>
#include<windows.h>
#include "Student.h"
//#include "StudentPerformance.h"
#include "Class.h"
using namespace std;

//keeps students temporary in a map
map<string,Student> pupils;

// create an instance of a class
Class c;

// changes the font colors
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//class8.setStudentList(&pupils);
string commandInput; // command passed
string null =""; // null string variable
bool run = true; // to keep kernel activated to receive commands

void commandParser(string cmd ); //
void addStudentList();
void checkList();
void copyListClass();



// gets the command entered
void commandOperator()
{
    cout<<"cmd:>";

    getline(cin,commandInput);
    commandParser(commandInput);


}

// gets the command pass in and evaluate it
// if the commnand does not exit display an error message.
void commandParser(string cmd )
{

    if(cmd == "add") // and more student to the list
    {
        SetConsoleTextAttribute(h,11);
        addStudentList();
        SetConsoleTextAttribute(h,10);

    }
    else if(cmd == "help") // get a guide from file
    {
        SetConsoleTextAttribute(h, 10);
        cout<<"coming soon \n";
        string line = "";
        ifstream myfile;
        myfile.open("helpFile.txt");
        while (getline(myfile,line))
        {
            cout<< line <<endl;
        }

    }
    else if(cmd == "checklist") // displays the list of students in class
    {
        if(!pupils.empty())
        {
            cout<<pupils.size() <<" Total number of pupils\n";
            checkList();
        }
        cout<<"list is empty \n";
    }
    else if(cmd == "checkclasslist") // displays the student in a class
    {
        SetConsoleTextAttribute(h,17);
        copyListClass();
        SetConsoleTextAttribute(h,10);
    }
    else if (cmd == "quit")
    {
        run = false; // set to false to stop the command line from asking inputs
    }

    else
    {
        cout<<"Command " << cmd<< " does not exits \n";

    }

}

//
void addStudentList()
{
    SetConsoleTextAttribute(h,15); // changes font to white


    string name; // the name of student
    string regNum; // regestration number of student
    // use admision number as key to avoid repeation

    Student s;
    s.setStudentDetails();
    s.setMarks();
    pupils[s.getRegNum()] =s;
    c.setStudentList(&pupils);
    SetConsoleTextAttribute(h,10);
}

// displays the student that have been added to the list
void checkList()
{


    pair <string,Student> pupil;
    for(pupil:pupils)
    {
        Student s = (Student)pupil.second;
        s.getStudentDetails();
        cout<<"\n\n\n";
    }

}

// passes the address of the list to the class pointer through the method
void copyListClass()
{
    Class c;
    c.setStudentList(&pupils);
    cout<<"this was the list copied \n";
    c.checkList();
}

int main()
{

   //s.getStudentDetails();
   // while the run is true  the cmd asks for command to execute
    while(run)
    {
        try
        {
            commandOperator();

        }
        catch(...)
        {
            cout<<"App could not run properly\n";
        }

    }

    return 0;
}
