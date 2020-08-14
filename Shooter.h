#ifndef SHOOTER_H
#define SHOOTER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include<QMediaPlayer>
#include "Plant.h"


class Shooter : public QObject , public QGraphicsPixmapItem , public Plant
{
    Q_OBJECT

private:
    QMediaPlayer * shooterPlayer;
    int timeIntervals;
    QTimer * shooterTimer;

public:
    explicit Shooter(QMediaPlayer * shooterPlayer , QTimer * shooterTimer , QGraphicsItem *parent = nullptr);

signals:

public slots:
    void shoot();

};

#endif // SHOOTER_H
