#include<iostream>
#include<string.h>
#include<fstream>
#include<istream>
using namespace std;

class data
{
   
     
    public:
    
    
    string task;
    void getdata()
    {
        cout<<"pls enter the task"<<endl;
        getline(cin>>ws,task);
       
        //cin.get();
       
        
    }
    void readData()
    {
        cout<<task<<endl;
       
    }
    

};
class file
{
private:

public:
    void maker()
    {
        fstream make("make.txt");
        if(make)
        {
            
        }
        else
        {
        fstream data("make.txt");
        data.close();
        }
    }
    
   
};
int main()
{
   file fun;
   fun.maker();
    int cnt;
    cout<<"enter the no of tasks"<<endl;
    cin>>cnt;
     data obj;
         ofstream file;
         file.open("make.txt",ios::app);
         
    for(int i=1;i<=cnt;i++)
    {
       obj.getdata();
       file<<obj.task<<endl;
    }
    file.close();
    char choice;
    cout<<"Do you want to rd task?(y/n)"<<endl;
    cin>>choice;
     ifstream gets;
      gets.open("make.txt");
     file<<obj.task<<endl;
    if(choice=='y')
    {
        cout<<"task:"<<endl;
    data c;
    ifstream rd("make.txt");
    while(1)
    {
        
        getline(rd,c.task);
        cout<<c.task<<endl;
        if(rd.eof())
        {break;}
    }
    }
return 0;
}

