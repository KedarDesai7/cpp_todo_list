#ifndef USERDB_USER_H
#define USERDB_USER_H

#include<string>
using namespace std;

class user{


public:
    //it is displayed at start for add task n view task
    int mainMenu();
    
    //to give option to view task
    int addTaskMenu();

    //to select the choice of view pending or complete task
    int viewTaskMenu();
    
    //shown after pending list to choose betn add task,mark task complete,view complete task
    int viewPendingTaskMenu();
    
    //shown after complete task to give option add task ,mark task pending,exit
    int compTask();

};





#endif