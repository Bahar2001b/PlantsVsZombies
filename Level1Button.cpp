#include "Level1Button.h"
#include "View.h"

Level1Button::Level1Button(QGraphicsScene *Scene) : level1Scene{Scene}
{  
    clickl1 = false;

    //set picture
    setPixmap(QPixmap(":/images/level1.png"));

    //add to scene
    Scene->addItem(this);

    //setPos
    setPos(338,528);

    //create level1 button music
       level1ButtonMusic = new QMediaPlayer();
       level1ButtonMusic->setMedia(QUrl("qrc:/music/click.mp3"));
}

void Level1Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    clickl1=true;
    level1ButtonMusic->play();

    auto myV = new View(1,1);
    myV->show();
}

Level1Button::~Level1Button()
{
    delete level1Scene;
    delete level1ButtonMusic;
}
