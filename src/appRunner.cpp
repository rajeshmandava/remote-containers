#include "appRunner.h"
#include "algorithms/sort/countSort.cpp"
appRunner::appRunner() {
  std::cout<<"appRunner::Constructor"<<std::endl;
  isInitialised = true;

}

int appRunner::run() {

  if(isInitialised)
  {
    //Create objects of the app
    callCountSort();
  }
  else
  {
    std::cout<<"appRunner creation failed"<<std::endl;
    return EXIT_FAILURE;
  }
  
}

void appRunner::statusUpdate() {
  std::cout<<"update status to other applications dev app is running"<<std::endl;
  //TODO configure IPC and update and status
}