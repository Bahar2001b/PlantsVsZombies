#include "SunFlower.h"
#include "Sun.h"


SunFlower::SunFlower(Score *sunScore ,  QGraphicsScene *sunScene ,
                    QTimer *sunTimer , QGraphicsItem *parent )
 : QObject() , Plant() , sunTimer(sunTimer) , timeIntervals{0} , sunScore(sunScore)
   , sunScene(sunScene)
{
    //set picture
    setPixmap(QPixmap(":/images/Sunflower.png"));

    connect(sunTimer,SIGNAL(timeout()),this,SLOT(makeSun()));

}

void SunFlower::makeSun()
{
    if(timeIntervals % 3750 == 0){

       auto mySun = new Sun(sunScene,sunScore,sunTimer);
       scene()->addItem(mySun);
       mySun->setPos(x(),y());


    }
    ++timeIntervals;
}
