#ifndef FILEMANAGERDB_FILEMANAGER_H
#define FILEMANAGERDB_FILEMANAGER_H



class fileManager
{
public:   
void maker();
};

class write:public fileManager
{
    string task;
    public:
    //this functio is to add task to pending file
    int addTask();

    //this task is to mark a pending task complete i.e to remove the said task from pending and to add to comp file
    void markComp(int no);
    
    //this function is to mark a complete task pending i.e to remove the said task from comp and to add to pending file
    void markPen();

    //this function is to delete a completed task from comp file
    int delComp();

};
class read:public fileManager
{
    string task;
    public:

    //tie is to read pending task file
    int  rdPen();

    //this is to read comp file
    int rdComp();
    int rdCompe();
};    









#endif