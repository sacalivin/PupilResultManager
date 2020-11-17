#ifndef CLASS_H
#define CLASS_H
#include "Student.h"
#include<map>

class Class
{
    public:
        Class();
        virtual ~Class();
        void AddStudent();
        // calculates the mean score
        void calculateMean();
        // finds the total num of students in a class
        void findTotalStudents();
        // set the details of student.
        void setStudentList(map<string,Student> *s);
         void checkList();

    protected:
        int totalStudents;
        double meanScore;
        map<string,Student> *pStudents;




    private:
};

#endif // CLASS_H
