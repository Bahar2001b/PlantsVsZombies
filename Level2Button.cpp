#include "Level2Button.h"

Level2Button::Level2Button(QGraphicsScene *Scene) : level2Scene{Scene}
{
    clickl2 = false;

    //set picture
    setPixmap(QPixmap(":/images/level2.png"));

    //add to scene
    Scene->addItem(this);

    //setPos
    setPos(450,480);

    //create level2 button music
       level2ButtonMusic = new QMediaPlayer();
       level2ButtonMusic->setMedia(QUrl("qrc:/music/shooter.mp3"));

}

Level2Button::~Level2Button()
{
    delete level2Scene;
    delete level2ButtonMusic;
}
