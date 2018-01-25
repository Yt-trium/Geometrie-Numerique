#ifndef FACE_H
#define FACE_H

class HalfEdge;

class Face
{
public:
    Face();
   ~Face();
    void setId(unsigned int id);

private:
    unsigned int id;
    HalfEdge *halfedge_ptr;

};

#endif // FACE_H
