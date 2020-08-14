#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QMovie>
#include <QLabel>


class Zombie : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int lives;
    int pixPer40MiliSec;
    int Layer;

public:
    int  gameOv;
    Zombie(const int& pixPer40MiliSec , QTimer *timer
           , QGraphicsItem *parent);
   // ~Zombie();

public slots:
    void moveToLeft();

};

#endif // ZOMBIE_H
