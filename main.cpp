#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"


int main()
{
    Book b1;
    AudioBook a1;
    BookShop bs;
    int arSize,type;
    string title1,author1,voiceactor1;
    b1.setAuthorName("J.K.Rowling");/*Hard coded values to check the objects*/
    b1.setTitle("HarryPotter");/*Hard coded values to check the objects*/
    cout<<"The records entered are "<<endl;/*Hard coded values to check the objects*/
    b1.printDescription();/*Hard coded values to check the objects*/
    a1.setAuthorName("jay");
    a1.setTitle("The story");
    a1.setVoiceActor("jay");
    cout<<"The records entered are "<<endl;
    a1.printDescription();
    cout<<"Enter the type of book\n1.Book\n2.AudioBook\n3.Exit\n";/*get the option*/
    cin>>type;
    if(type==1)
    {
        arSize=bs.getSize();
        for (int i=0;i<arSize;i++)
        {
            cout<<"Enter the Title:";
            cin>>title1;
            bs.setTitle(title1);
            cout<<"Enter the Author name:";
            cin>>author1;
            bs.setAuthorName(author1);
            bs.addBook(title1,author1);
            bs.setAddedno();
        }
        cout<<"Number of books added are :"<< bs.getAddedno()<<endl;
    }
    else if(type==2)
    {
        arSize=bs.getSize();
        for (int i=0;i<arSize;i++)
        {
            cout<<"Enter the Title:";
            cin>>title1;
            bs.setTitle(title1);
            cout<<"Enter the Author name:";
            cin>>author1;
            cout<<"Enter the voice actor's name:";
            cin>>voiceactor1;
            bs.setAuthorName(author1);
            bs.setVoiceActor(voiceactor1);
            bs.addBook(title1,author1,voiceactor1);
            bs.setAddedno();
        }
        cout<<"Number of books added are :"<<bs.getAddedno()<<endl;
    }
else
{
        cout<<"Exit!";
        exit;

}   
return 0;
}