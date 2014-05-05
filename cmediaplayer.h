#ifndef CMEDIAPLAYER_H
#define CMEDIAPLAYER_H

#include <QObject>
#include <QMediaPlayer>

class CMediaPlayer : public QObject
{
    Q_OBJECT
public:
    explicit CMediaPlayer(QObject *parent = 0);

    void start(QString aMediaFile);
    
private slots:
     void onStateChanged(QMediaPlayer::State);

private:
    QMediaPlayer *mPlayer;

    
};

#endif // CMEDIAPLAYER_H
