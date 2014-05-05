#include "cmediaplayer.h"

CMediaPlayer::CMediaPlayer(QObject *parent) :
    QObject(parent)
{

    mPlayer = new QMediaPlayer(this);
    connect(mPlayer,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(onStateChanged(QMediaPlayer::State)));
}


void CMediaPlayer::onStateChanged(QMediaPlayer::State aState)
{
    switch (aState)
    {
        //for play loop back
        case QMediaPlayer::StoppedState:
            mPlayer->play();
        break;
        default:
        break;
    }
}

void CMediaPlayer::start(QString aMediaFile)
{
    mPlayer->setMedia(QUrl::fromLocalFile(aMediaFile));
    mPlayer->setVolume(50);
    mPlayer->play();
}
