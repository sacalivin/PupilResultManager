#ifndef SUBJECT_H
#define SUBJECT_H
#include<map>
#include<string>
using namespace std;

class Subject
{
    public:
        Subject();
        virtual ~Subject();
        void setMarks();
        void getMarks();
         int calculateMarks();


    protected:
        // keep total marks
        int marks;
        // holds subject name and their scores
        map<string,int> subjects;




    private:

};

#endif // SUBJECT_H
