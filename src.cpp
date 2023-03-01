#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include"user.h"
#include"user.cpp"
#include"fileManager.h"
#include"fileManager.cpp"

using namespace std;

int main()
{
   fileManager fx;
   fx.maker();
   cout<<"\n\n\t\t\t---------------------------------";
   cout<<"\n\t\t\t |    WELCOME TO TO-DO LIST     |"<<endl;
   cout<<"\t\t\t---------------------------------"<<endl;
   cout<<"\n\t\t\t   What would you like to do ?"<<endl;

   user obj;
   write make;
   read rdobj;

   int use=obj.mainMenu();

   while(1)
   {
      switch(use)
      {
         //used to add task fun in filemanager
         case 1:use=make.addTask();
                       // use=obj.addTaskMenu();
                        break;

         //used to read pending list
         case 2: rdobj.rdPen();
               
               //interface to go to main menu or view complet list
         use=obj.viewPendingTaskMenu();
                         break;
         

         case 3:rdobj.rdPen();

                        //interface to go to main menu , mark complete task or delete complete task
                        use=obj.viewTaskMenu();
                        break;

               //used to mark a task complete
         case 7:rdobj.rdPen();
         int tno;
         cout<<"\n\t-----------------------------"<<endl;
         cout<<"\n\t Enter Task No : "<<endl;
         cin>>tno;
         make.markComp(tno);
                         cout<<"\n\t Added to completed Task List !..."<<endl;
                         use=obj.viewPendingTaskMenu();
                         break;
         
         //to read complete list
         case 4:rdobj.rdCompe();
         use=8;
                     
                     break;
         
         //used to delete complete task
         case  5:rdobj.rdComp();
         
                         use=make.delComp();
                       
                         break;

         //to show main menu
         case 8:use=obj.mainMenu();
                  break;

                  //to break out of loop and end application
         default:break;                   

      }
      if(use==0)
      {break;}
   }
   cout<<"\n\t\t -------------------------------------------------";
 
    cout<<"\n\t\t  |  >>  THANK YOU FOR USING TO DO LIST ;) <<  |";
  
   cout<<"\n\t\t -------------------------------------------------"<<endl;
   cout<<"\n\t\t\t\t\t Created by kedar , Mayur , Atharav ";
   cout<<"\n\n\n";

return 0;
    
}