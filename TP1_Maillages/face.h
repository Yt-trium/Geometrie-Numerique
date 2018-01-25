#ifndef FACE_H
#define FACE_H

class HalfEdge;

class Face
{
public:
    Face();
   ~Face();

private:
    unsigned int id;
    HalfEdge *halfedge_ptr;

};

#endif // FACE_H
