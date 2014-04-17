#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
    public:
        Student();
        virtual ~Student();
        string getRollNo() {
            return rollNo;
        }
        void setRollNo(string rollNo) {
            this->rollNo = rollNo;
        }
        string getName() {
            return name;
        }
        void setName(string name) {
            this->name = name;
        }
        void operator=(const Student * st)
        {
            this->name= st->name;
            this->rollNo = st->rollNo;

        }
    private:
        string rollNo;
        string name;
};
#endif // STUDENT_H
