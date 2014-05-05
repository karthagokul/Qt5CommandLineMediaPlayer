#include <QCoreApplication>
#include<QDebug>

#include "cmediaplayer.h"

int main(int argc,char **argv)
{
    QCoreApplication app(argc,argv);

    if(argc<2)
    {
        qDebug()<<"Need to give the media file name as command line argument";
        return -1;
    }

    QString mediaFile(argv[1]);

    qDebug()<<"Playing "<<mediaFile;

    CMediaPlayer player;
    player.start(mediaFile);

    int ret=app.exec();
    return ret;
}
