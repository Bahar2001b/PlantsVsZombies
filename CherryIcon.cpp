#include "CherryIcon.h"

CherryIcon::CherryIcon(QGraphicsScene *cherryIconScene) : cherryIconScene{cherryIconScene}
{
    isSelected=false;
    isSelectable=false;

    //set picture
    setPixmap(QPixmap(":/images/dark cherry icon.png"));

    //add to scene
    cherryIconScene->addItem(this);

    //setPos
    setPos(365 , 11);

}

CherryIcon::~CherryIcon(){
    delete cherryIconScene;
}


void CherryIcon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(isSelectable==true){
        isSelected=true;
        //set picture
        setPixmap(QPixmap(":/images/light cherry icon.png"));


        //setPos
        setPos(365 , 11);
    }

    //add sound if isSelectable == false
}
