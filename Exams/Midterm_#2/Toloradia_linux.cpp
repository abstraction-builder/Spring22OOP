#include <iostream>
#include <string>

class File
{
protected:
    int size;
    std::string fileType;
    bool readable;
    bool writable;
    bool executable;

public:
    File()
    {
        int size = 0;
        fileType = " ";
        readable = true;
        writable = true;
        executable = false;
    }
    File(std::string fileType, int size, bool readable, bool writable, bool executable)
    {
        this->fileType = fileType;
        this->size = size;
        this->readable = readable;
        this->writable = writable;
        this->executable = executable;
    }
    void setReadable(bool readable)
    {
        if (this->fileType == "Regular" || "Directory")
            this->readable = readable;
    }
    void setWritable(bool writable)
    {
        if (this->fileType == "Regular")
            this->writable = writable;
    }
    void setExecutable(bool executable)
    {
        if (this->fileType == "Object File")
            this->executable = executable;
    }
    bool getReadable() const
    {
        return readable;
    }
    bool getWritable() const
    {
        return writable;
    }
    bool getExecutable() const
    {
        return executable;
    }
    void toString() const
    {
        if (fileType == "Regular")
            std::cout << "It is readable and writable but not executable" << std::endl;
        else if (fileType == "Object File")
            std::cout << "It is only executable" << std::endl;
        else if (fileType == "Directory")
            std::cout << "It is only readable" << std::endl;
    }
};

class ObjectFile : public File
{
public:
    ObjectFile(std::string fileType, bool readable, bool writable, bool executable)
    {
        this->fileType = fileType;
        this->readable = readable;
        this->writable = writable;
        this->executable = executable;
    }
};

class Directory : public File
{
public:
    Directory(std::string fileType, bool readable, bool writable, bool executable)
    {
        this->fileType = fileType;
        this->readable = readable;
        this->writable = writable;
        this->executable = executable;
    }
};

int main()
{
    File myFile("Regular", 32, true, true, false);
    myFile.toString();

    ObjectFile myObjFile("Object File", false, false, true);
    myObjFile.toString();

    Directory myDir("Directory", true, false, false);
    myDir.toString();

    return 0;
}