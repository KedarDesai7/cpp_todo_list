#include<iostream>
#include<stdio.h>
#include<string>
#include "user.h"

using namespace std;

int  user::mainMenu()
{
    //cout<<"MAIN MENU"<<endl;
    //cout<<"Please enter the option number to select"<<endl;
    cout<<"\n\n\t\t\t---------------------------------";
   cout<<"\n\t\t\t |    WELCOME TO TO-DO LIST     |"<<endl;
   cout<<"\t\t\t---------------------------------"<<endl;
   cout<<"\n\t\t\t   What would you like to do ?"<<endl;
    cout<<"\n\t\t\t 1. ADD TASKS "<<endl;
    cout<<"\n\t\t\t 2. VIEW TASKS"<<endl;
    cout<<"\n\t\t\t 3. UPDATE TASKS"<<endl;
    cout<<"\n\t\t\t 4. EXIT"<<endl;

    int choice;
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:return 1;
    case 2:return 2;
    case 3:return 3;
    default:return 0;
    }
}

// int user::addTaskMenu()
// {
//     cout<<"Please enter the option number to select"<<endl;
//     cout<<"1.Would you like to view task?"<<endl;
//     cout<<"2.keep adding"<<endl;
//     cout<<"3.EXIT"<<endl;
//     int choice;
//     cin>>choice;
//     system("cls");
//     switch(choice){
//     case 1:return 2;
//     case 2:return 1;
//     default:return 0;
//     }
// }

int  user::viewTaskMenu()
{
   // cout<<"What type of tasks would you like to see?"<<endl;
    //cout<<"Please enter the option number to select"<<endl;
    cout<<"\n   ---------------------------"<<endl;
    //cout<<""
    cout<<"\n   1. Mark Task To Completed "<<endl;
    cout<<"\n   2. Delete Completed Task "<<endl;
    cout<<"\n   3. Go To Main Menu"<<endl;
    int choice;
    cin>>choice;
    system("cls");
    switch(choice){
    case 1:return 7;
    case 2:return 5;
    default:return 8;
    }

}

int user::viewPendingTaskMenu()
{
     // cout<<"Please enter the option number to select"<<endl;
     cout<<"\n    --------------------------------------------"<<endl;
    cout<<"\n\t 1. View Completed Tasks List"<<endl;
    cout<<"\n\t 2. Go To Main Menu"<<endl;
    //cout<<"3.View completed tasks"<<endl;
    //cout<<"4.View pending tasks"<<endl;
    //cout<<"5.EXIT"<<endl;
    int choice;
    cin>>choice;
   system("cls");
    switch(choice){
    case 1:return 4;
    case 2:return 8;
    //case 3:return 4;
    //case 4:return 3;
    default:return 8;
    }

}

//  int user::compTask()
// {
//     cout<<"Please enter the option number to select"<<endl;
//     cout<<"1.Add new task to pending"<<endl;
//     cout<<"2.Delete task from complete"<<endl;
//     cout<<"3.Mark task as pending"<<endl;
//     cout<<"4.View pending tasks"<<endl;
//     cout<<"5.view completed tasks"<<endl;

//     int choice;
//     cin>>choice;
//     system("cls");
//     switch(choice){
//     case 1:return 1;
//     case 2:return 5;
//     case 3:return 6;
//     case 4:return 3;
//     case 5:return 4;
//     default:return 0;
//     }

// }