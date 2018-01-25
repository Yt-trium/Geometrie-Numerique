#ifndef HALFEDGE_H
#define HALFEDGE_H

class Vertex;
class Face;

class HalfEdge
{
public:
    HalfEdge();
    ~HalfEdge();

private:
    Vertex      *vertex_src_ptr;
    Face        *face_ptr;
    HalfEdge    *halfedge_prev_ptr;
    HalfEdge    *halfedge_next_ptr;
    HalfEdge    *halfedge_headtail_ptr;
};

#endif // HALFEDGE_H
