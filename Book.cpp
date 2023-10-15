#include "Book.h"

string Book :: getTitle()
{
return Title;
}
void Book :: setTitle(string Title)
{
    this->Title=Title;
}
string Book::getAuthorName()
{
    return AuthorName;
}
void Book::setAuthorName(string AuthorName)
{
    this->AuthorName=AuthorName;
}

Book :: Book()
{
    AuthorName="";
    Title="";
}
void Book::printDescription()
{
    cout<<"Book Description\n";
    cout<<"Book Title : "<<getTitle()<<endl;
    cout<<"Author : "<<getAuthorName()<<endl;
    
}