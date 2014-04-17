#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include "Student.h"
#include "StudentView.h"
class StudentController
{
    public:
        StudentController(Student* model, StudentView* view);
        virtual ~StudentController();
   void setStudentName(string name){
      model.setName(name);
   }

   string getStudentName(){
      return model.getName();
   }

   void setStudentRollNo(string rollNo){
      model.setRollNo(rollNo);
   }

   string getStudentRollNo(){
      return model.getRollNo();
   }

    void updateView(){
      view.printStudentDetails(model.getName(), model.getRollNo());
   }
    protected:
    private:
        Student model;
        StudentView view;
};

#endif // STUDENTCONTROLLER_H
