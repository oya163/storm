#include <startthread.h>

StartThread::StartThread(QString filepath){
    this->filepath = filepath;
}

StartThread::~StartThread(){
    delete sc;
}

void StartThread::run(){
    //start thread
    retVal = sc->startTorrent(StartThread::filepath);
    emit threadResult(retVal);
}

