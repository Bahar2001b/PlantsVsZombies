#include "GroundRect.h"
#include <QGraphicsScene>

GroundRect::GroundRect(QGraphicsItem *parent)
    : QObject () , QGraphicsRectItem (parent)
{

}

void GroundRect:: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //set plant music
        plantMusic = new QMediaPlayer();
        plantMusic->setMedia(QUrl("qrc:/music/plant.mp3"));
        plantMusic->play();

}

