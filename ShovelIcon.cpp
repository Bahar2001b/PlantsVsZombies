#include "ShovelIcon.h"


ShovelIcon::ShovelIcon(QGraphicsScene *shovelIconScene) : shovelIconScene{shovelIconScene}
{
    isSelected=false;

    //set picture
    setPixmap(QPixmap(":/images/shovel icon.png"));

    //add to scene
    shovelIconScene->addItem(this);

    //setPos
    setPos(750 , 0);

}

ShovelIcon::~ShovelIcon()
{
    delete shovelIconScene;
}

void ShovelIcon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
          isSelected=true;

        //set picture
        setPixmap(QPixmap(":/images/light shovel icon.png"));
        //add to scene
       // shooterIconScene->addItem(this);
        //setPos
        setPos(750 , 0);

    //add sound if isSelectable == false
}

void ShovelIcon::setShovelIcon()
{
    if(isSelected==false){

        //set picture
        setPixmap(QPixmap(":/images/shovel icon.png"));
        //add to scene
        //shooterIconScene->addItem(this);
        //setPos
        setPos(750 , 0);

    }

}

