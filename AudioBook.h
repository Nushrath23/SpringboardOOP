#pragma once
#include "Book.h"

class AudioBook : public Book
{
    protected:
        string voiceActor;
    public:
        void setVoiceActor(string);
        string getVoiceActor();
        AudioBook();
        void printDescription();

};
