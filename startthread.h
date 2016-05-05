#ifndef STARTTHREAD_H
#define STARTTHREAD_H

#include <simple_client.h>

#include <QThread>
#include <QString>

class StartThread : public QThread{
    Q_OBJECT
public:
    explicit StartThread(QString filepath);
    ~StartThread();
    void run();

private:
    int retVal = 0;
    QString filepath;
    simple_client *sc = new simple_client();

signals:
    void threadResult(int result);

};


#endif // STARTTHREAD_H
