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
                cin>> score;
                while(score < 0 || score > 100)
                {
                    cout<<"\t\tPlease score should >=0 and <100 \n";
                    cout<<i.first<<"=";
                    cin>> score;
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
        cout<< "The total score is "<<calculateMarks() <<endl;
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
int Subject::calculateMarks()  // calculates marks of indivitual student.
{
    pair <string, int > score;
    int result = 0;
    for( score : subjects)
    {
        result += score.second;
    }


    return result;
}
