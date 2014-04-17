#ifndef STUDENTVIEW_H
#define STUDENTVIEW_H
#include <iostream>
using namespace std;
class StudentView
{
    public:
        StudentView();
        virtual ~StudentView();
        void printStudentDetails(string studentName, string studentRollNo){
            cout<< "Student: "<<endl;
            cout<< "Name: " << studentName <<endl;
            cout << "Roll No: "  << studentRollNo<< endl;
        }
        void operator=(StudentView *sv)
        {

        }
        private:
};

#endif // STUDENTVIEW_H
