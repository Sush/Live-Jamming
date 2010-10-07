#include "audioengine.h"
#include <inputthread.h>
#include <outputthread.h>

class Component_Jam;

AudioEngine::AudioEngine(Component_Jam& jam_) :
        jam(jam_),
        running(false)
{
  inputThread = new InputThread();
  //outputThread = new OutputThread();
}

AudioEngine::~AudioEngine(){ //faire qq chose de + propre
    //Send signal to inputthread to quit the thread
    qDebug() << "DELETING INPUT THREAD";
    inputThread->can_process = 0;
    delete inputThread;
    qDebug() << "DONE";
    //outputThread->terminate();
    //delete outputThread;
}
