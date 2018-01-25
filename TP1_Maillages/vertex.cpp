#include "vertex.h"

Vertex::Vertex()
{

}

Vertex::~Vertex()
{

}

void Vertex::setId(unsigned int id)
{
    this->id = id;
}

void Vertex::setCoord(double x, double y, double z)
{
    this->coord.x = x;
    this->coord.y = y;
    this->coord.z = z;
}
