#include "StudentController.h"

StudentController::StudentController(Student* model, StudentView* view){
      this->model = model;
      this->view = view;
   }


StudentController::~StudentController()
{
    //dtor
}
