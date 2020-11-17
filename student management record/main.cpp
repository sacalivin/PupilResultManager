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

map<string,Student> pupils;
Class c;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//class8.setStudentList(&pupils);
string commandInput;
string null ="";
bool run = true;
void commandParser(string cmd );
void addStudentList();
void checkList();
void copyListClass();



void commandOperator()
{
    cout<<"cmd:>";

    getline(cin,commandInput);
    commandParser(commandInput);


}
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
    else if(cmd == "checklist")
    {
        if(!pupils.empty())
        {
            cout<<pupils.size() <<" Total number of pupils\n";
            checkList();
        }
        cout<<"list is empty \n";
    }
    else if(cmd == "checkclasslist")
    {
        SetConsoleTextAttribute(h,12);
        copyListClass();
        SetConsoleTextAttribute(h,10);
    }
    else if (cmd == "quit")
    {
        run = false;
    }

    else
    {
        cout<<"Command " << cmd<< " does not exits \n";

    }

}

void addStudentList()
{
    SetConsoleTextAttribute(h,15);


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
    while(run)
    {
        try
        {
            commandOperator();

        }
        catch(...)
        {
            cout<<"My app failed \n";
        }


    }


    return 0;
}
