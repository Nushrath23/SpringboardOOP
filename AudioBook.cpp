#include "AudioBook.h"

void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor=voiceActor;
}
string AudioBook::getVoiceActor()
{
    return voiceActor;
}
AudioBook::AudioBook()
{
    voiceActor="";
}
void AudioBook :: printDescription()
{
    cout<<"Audio Book Description\n";
    cout<<"Book Title : "<<getTitle()<<endl;
    cout<<"Author : "<<getAuthorName()<<endl;
    cout<<"Voice Actor: "<<getVoiceActor()<<endl;
    
}