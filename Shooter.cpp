#include "Shooter.h"
#include<QGraphicsScene>
#include"Bullet.h"

Shooter::Shooter(QMediaPlayer *shooterPlayer,QTimer * shooterTimer, QGraphicsItem *parent)
    : QObject() , QGraphicsPixmapItem(parent) , Plant() , shooterTimer{shooterTimer}
{
    //set picture
    setPixmap(QPixmap(":/images/shooter.png"));                 //image shooter

    //create shooter player
    shooterPlayer = new QMediaPlayer();
    shooterPlayer->setMedia(QUrl("qrc:/music/Shooter.mp3"));        //sound shooter

    //connect shoot slot
    connect(shooterTimer , SIGNAL(timeout()) , this , SLOT(shoot()));

}

void Shooter::shoot()
{
    //shoot every 400 millisecond
    if( timeIntervals % 10 ==0 ){

        //create bullet
        auto bullet = new Bullet(shooterTimer , 24);

        scene()->addItem(bullet);
        bullet->setPos(x()+ 90,y());

        //plsy shooterPlayer
        if(shooterPlayer->state() == QMediaPlayer::PlayingState){
            shooterPlayer->setPosition(0);
        }
        else if(shooterPlayer->state() == QMediaPlayer::StoppedState){
            shooterPlayer->play();
        }

    }

    //invrement timeIntervals
    ++timeIntervals;
}
