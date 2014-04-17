#include <iostream>
#include "Student.h"
#include "StudentView.h"
#include "StudentController.h"
using namespace std;

static Student* retriveStudentFromDatabase(){
      Student* student = new Student();
      student->setName("Robert");
      student->setRollNo("10");
      return student;
   }
int main()
{
    //fetch student record based on his roll no from the database
      Student* model  = retriveStudentFromDatabase();

      //Create a view : to write student details on console
      StudentView* view = new StudentView();

      StudentController* controller = new StudentController(model, view);

      controller->updateView();

      //update model data
      controller->setStudentName("John");

      controller->updateView();
   }


