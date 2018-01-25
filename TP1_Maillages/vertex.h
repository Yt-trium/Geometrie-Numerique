#ifndef VERTEX_H
#define VERTEX_H

class HalfEdge;

typedef struct
{
    double x;
    double y;
    double z;
} Coord;


class Vertex
{
public:
    Vertex();
    ~Vertex();
    void setId(unsigned int id);
    void setCoord(double x, double y, double z);

private:
    unsigned int id;
    Coord   coord;
    HalfEdge *halfedge_ptr;

};

#endif // VERTEX_H
