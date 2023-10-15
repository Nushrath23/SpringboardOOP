#pragma once
#include "libraries.h"

class Book 
{
    protected:
        string Title;
        string AuthorName;

    public:
    string getTitle();
    void setTitle(string);
    string getAuthorName();
    void setAuthorName(string);
    Book();
    virtual void printDescription();
    
};
