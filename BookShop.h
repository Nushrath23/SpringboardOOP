#pragma once
#include "AudioBook.h"


class BookShop : public AudioBook
{
    protected:
        int size;
        string* bookCollection = new string;
        int noOfBookAdded=0;
    public:
        BookShop();
        int getSize();
        void setAddedno();
        int getAddedno();
        void addBook(string,string);/*book*/
        void addBook(string,string,string);/*audiobook*/
        ~BookShop();
};