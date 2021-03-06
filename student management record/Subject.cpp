#include "Subject.h"
#include<iostream>
#include<map>

using namespace std;
Subject::Subject()
{
    // initializes the map with this values.
    subjects["maths"] =0;
    subjects["english"] =0;
    subjects["kiswahili"] =0;
    subjects["Science"] =0;
    subjects["social studies"] =0;

    //ctor
}


Subject::~Subject()
{
    //dtor
}

// sets the marks of a student
void Subject::setMarks()
{
    try
    {
            pair <string, int> i; // a pair to hold one record
        cout<<"Enter scores\n";
        cout<<"**********************************************************\n";
        for(i:subjects)
        {
            int score =-1;
            try
            {


                cout<< "\t\t"<<i.first<<"=";


// checks the validity of the users input
                while(!(cin >> score) || score < 0 || score >100 ){
                        cin.clear();
                        cin.ignore();
                        cout << "Invalid input. (score should >=0 and <100)Please, try again: ";
                    }


                subjects[i.first] = score;


                //cin>>subjects[i.first];
            }
            catch(...)
            {
                cout<< "Error occur in data entry \n";
            }

            cout<<"**********************************************************\n";
        }
        // calculate the score
        calculateMarks();
        cout<< "The total score is "<< marks <<endl;
        cout<<"**********************************************************\n";
        cout<<"**********************************************************\n";
    }
    catch(...)
    {
        cout<<"could not get in details \n";
    }




}

void Subject::getMarks()  // get the scores in subjects.
{
     pair <string,int> item;
     cout<< "_________________________________________________________________\n";
     // loops through the list of subjects and display their result
    for(item:subjects)
    {
        cout<< "\t\t"<<item.first<<"="<<item.second<<endl;


    }
    cout<< "_________________________________________________________________\n";
//    pair<string,int> x;
//    map<string, int>::iterator i = subjects.begin();
//    for(i = subjects.begin(); i=!subjects.end(); i++)
//    {
//        cout<<i->first<<"="<<endl;
//
//    }
}

// loops through the subjects get their marks and calculate their total
int Subject::calculateMarks()  // calculates marks of indivitual student.
{
    pair <string, int > score;
    int result = 0;
    for( score : subjects)
    {
        result += score.second;
    }

    //keep the marks
    marks = result;


    return result;
}
