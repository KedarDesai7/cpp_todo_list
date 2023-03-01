#include<iostream>
#include<fstream>
#include<istream>
#include<string>
#include<vector>
#include"fileManager.h"

using namespace std;



void fileManager::maker()
{

     fstream pending("pending.txt");
        if(pending)
        {
            
        }
        else
        {
        fstream data("pending.txt");
        data.close();
        }
        fstream comp("comp.txt");
        if(comp)
        {
            
        }
        else
        {
        fstream data("comp.txt");
        data.close();
        }
}

int write::addTask()
{
    system("cls");
    cout<<"\n\t\t -----------------------------------------------------------------";
    cout<<"\n\t\t  |                            \t\t\t\t\t|";
    cout<<"\n\t\t  |  >>  WHAT WOULD LIKE TO DO TODAY? ( Add The Tasks )  <<     |";
    cout<<"\n\t\t  |                            \t\t\t\t\t|";
     cout<<"\n\t\t -----------------------------------------------------------------";

    cout<<"\n\n\t\t  Please Enter The No Of Tasks DO You Want To Add :"<<endl;
    int no;
    cin>>no;
    ofstream file;
    file.open("pending.txt",ios::app);
    for(int i=1;i<=no;i++)
    {
    
    cout<<"\n\t\t   Enter The Task "<<i<<endl;
    getline(cin>>ws,this->task);
    file<<this->task<<endl;
    }
    cout<<"\n\t\t   Would You Like To Add More Task (y/n) ?"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'|| ch=='Y')
    {
        return 1;
    }
    else{
        return 8;
    }


}

/*void write::addTask(string newTask)
{
    ofstream file;
    file.open("pending.txt",ios::app);
    write.task=newTask;
    file<<write.task<<endl;

}*/

void write::markComp(int no)
{
    fstream pend("pending.txt");
    vector<string> lines;
    string line;

    while(getline(pend,line))
    {
        lines.push_back(line);
    }
    pend.close();
    if(no<1||no>lines.size())
    {
        cout<<"Invaid input"<<endl;
        cin.get();
    }

    //adding pend task to comp file
    string compt=lines[no-1];
     ofstream file;
    file.open("comp.txt",ios::app);
    file<<compt<<endl;
    file.close();

    //re entering all task to pending without compt
    ofstream pen("pending.txt");
    for(int i=0;i<lines.size();i++)
    {
      if(i!=(no-1))
      {
        pen<<lines[i]<<endl;
    
      }
    }
    pen.close();

}

void write::markPen()
{
 fstream comp("comp.txt");
    vector<string> lines;
    string line;

     while(getline(comp,line))
    {
        lines.push_back(line);
    }
    comp.close();
    cout<<"Pls enter task no"<<endl;
    int no;
    cin>>no;
     if(no<1||no>lines.size())
    {
        cout<<"Invaid input"<<endl;
        
    }

     //adding comp task to pend file
    string pen=lines[no-1];
     ofstream file;
    file.open("pending.txt",ios::app);
    file<<pen;
    file.close();

     //re entering all task to comp file  without pen
    ofstream compf("comp.txt");
    for(int i=0;i<lines.size();i++)
    {
      if(i!=(no-1))
      {
        compf<<lines[i]<<endl;
    
      }
    }
    compf.close();

}

int write::delComp()
{
 fstream comp("comp.txt");
    vector<string> lines;
    string line;

     while(getline(comp,line))
    {
        lines.push_back(line);
    }
    comp.close();
    cout<<"Pls enter task no to delete"<<endl;
    int no;
    cin>>no;
     if(no<1||no>lines.size())
    {
        cout<<"\n\tInvaid input !!"<<endl;
        cout<<"\nEnter 1 to try again"<<endl;
         cout<<"\nEnter 2 to go to main menu"<<endl;
        int ch;
        cin>>ch;
        if(ch==2)
        {
            return 8;
        }
        else{
        return 5;
        }
        //cin.get();
    }

     ofstream compf("comp.txt");
    for(int i=0;i<lines.size();i++)
    {
      if(i!=(no-1))
      {
        compf<<lines[i]<<endl;
    
      }
    }
    compf.close();
    cout<<"Deleted"<<endl;
    cout<<"return to menu"<<endl;

    return 8;
}

int read::rdPen()
{
    cout<<"     ------------------------------";
    cout<<"\n       |    Pending Tasks List   |"<<endl;
    cout<<"     ------------------------------"<<endl;

    ifstream file;
    file.open("pending.txt");
    string st,dt=". ";
   // cout<<"\n"<<endl;
    int i=1;
    while(getline(file>>ws,st))
    {
        
        // if(st=="")
        // {
        //     cout <<"NO more complete task"<<endl;
        //     break;}
        cout<<i<<dt<<st<<endl;
        // if(file.eof())
        // {
        //     break;
        // }
        i++;
       // st="";
    }
    //cout<<"view complete task"<<endl;


}

int read::rdComp()
{
 ifstream file;
    file.open("comp.txt");
    string st,dt=".";
    int i=1;
    while(getline(file>>ws,st))
    {
        
        
        cout<<i<<dt<<st<<endl;
        i++;
        // if(file.eof())
        // {
        //     break;
        // }
        // st="";
    }
    // int a1;
    // cout<<"\n\n\t\t >> [ Go To Main Menu ( Press 1 ) ]  <<";
    // cin>>a1;
    // switch (a1)
    // {
    // case 1: return 8;
    //     //break;
    
    // //default:
    //   //  break;
    // }
   // return 8;
    // cout<<"Return to main menu(y/n)?"<<endl;
    // char ch;
    // // cin>>ch;
    // if(ch=='y')
    // {return 8;}
    // else{
    //     return 8;
    // }
    // cout<<"Return to main menu(y/n)?"<<endl;
    //  char ch;
    //  cin>>ch;
     return 8;
}
int read::rdCompe()
{
 ifstream file;
    file.open("comp.txt");
    string st,dt=".";
    int i=1;
    while(getline(file>>ws,st))
    {
        
        
        cout<<i<<dt<<st<<endl;
        i++;
       
    }
    
     cout<<"Return to main menu(y/n)?"<<endl;
      char ch;
      cin>>ch;
     return 8;
}

