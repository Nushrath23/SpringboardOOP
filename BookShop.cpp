#include "BookShop.h"
BookShop::BookShop()
{
    bookCollection={0};
}
void BookShop::addBook(string title,string author,string name)/*Audio Book*/
{
    cout<<"Added successfully\n";
    this->noOfBookAdded+=1;
}
void BookShop::addBook(string title,string author)/*Book*/
{
    cout<<"Added successfully\n";
    this->noOfBookAdded+=1;

}
int BookShop::getSize(){
    cout<<"Enter the number of Books to add:";
    cin>>size;
    return size;

}
BookShop::~BookShop()
{
    delete bookCollection;
    cout<<"\nDestructor Activated\n";
}
void BookShop::setAddedno()
{
    this->noOfBookAdded=noOfBookAdded;
}
int BookShop ::getAddedno()
{
    return noOfBookAdded;
}