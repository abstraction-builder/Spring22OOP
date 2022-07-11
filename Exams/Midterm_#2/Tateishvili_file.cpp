#include <iostream>
#include <string>

using namespace std;

class File:
{
    int size;
    string fileType;
    bool readable;
    bool writable;
    bool executable;

    File();
    File(string fileType, int size, bool readable, bool writable, bool executable);
    Void setReadable(bool readable)
    Void setWritable(bool writable)
    Void setExecutable(bool executable)
    Bool getReadable() const;
    Bool getWritable() const;
    Bool getExecutable() const;
    Void toString() const;
};

class ObjectFile: public File
{
    bool executable;

    public:
    Dictionary(string fileType, int size, bool readable, bool writable, bool executable )
    {
        this->fineType = fileType;
        this->size = size;
        this->readable = readable;
        this-> writable = writable;
        this-> executable = executable;
    }

    string get_filetype(){ return filetype; }

    int get_size(){ return size; }

    bool get_readable(){ return readable; }

    bool get_writable(){ return writable; }

    bool get_executable(){ return executable; }


    void set_filetype(string s){ fileType = s; }

    void set_size(int s){size = s; }

    void set_readable(bool s){ readable = s; }

    void set_writable(bool s){ writable = s; }

    void set_executable(bool s){ executable = s; }

    virtual void toString()
    {

        cout << "ObjectFile is executable or not: " << executable<<endl;

    }


}

class Directory: public File
{
    bool readable;

    public:
    Dictionary(string fileType, int size, bool readable, bool writable, bool executable )
    {
        this->fineType = fileType;
        this->size = size;
        this->readable = readable;
        this-> writable = writable;
        this-> executable = executable;
    }

    string get_filetype(){ return filetype; }

    int get_size(){ return size; }

    bool get_readable(){ return readable; }

    bool get_writable(){ return writable; }

    bool get_executable(){ return executable; }


    void set_filetype(string s){ fileType = s; }

    void set_size(int s){size = s; }

    void set_readable(bool s){ readable = s; }

    void set_writable(bool s){ writable = s; }

    void set_executable(bool s){ executable = s; }

    virtual void toString()
    {

        cout << "Dictionary is readable or not: " << readable <<endl;

    }

}

int main(){

   File myFile("Regular", 32, true, true, false);

   myFile.toString();

   ObjectFile myObjFile("Object File", false, false, true);

   myObjFile.toString();

   Directory myDir("Directory", true, false, false);

   myDir.toString();

}