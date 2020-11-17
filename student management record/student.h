#ifndef STUDENT_H
#define STUDENT_H
#include "Subject.h"
#include<string>

class Student:public Subject
{
    public:
        Student();
        Student(string admNum, string studentName);
        virtual ~Student();
        string getRegNum();
        void setStudentDetails();
        void getStudentDetails();




    protected:
        int marks;


    private:
        string regNum;
        string name;
};

#endif // STUDENT_H
