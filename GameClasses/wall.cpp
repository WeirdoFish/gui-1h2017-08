#include "wall.h"



Wall::Wall(QVector2D position, float h, float w ):
    RectangleCollision(position,w,h)
{

}

void Wall::draw(GameWidget *obg)
{

    QPainter pain(obg);

    //QPen pen;
   // pen.setColor(Qt::black);
    //pain.setPen(pen);
    pain.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    pain.setBrush(QBrush(Qt::blue, Qt::SolidPattern));
   // pain.drawEllipse(QRectF(this->x, this->y, this->width,  this->height));
    pain.drawRect(QRectF(this->position.x(), this->position.y(), this->width,  this->height));
}