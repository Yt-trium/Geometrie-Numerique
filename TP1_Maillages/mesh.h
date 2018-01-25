#ifndef MESH_H
#define MESH_H

#include <vector>

#include "vertex.h"
#include "face.h"

class Mesh
{
public:
    Mesh();
    ~Mesh();

    void import();

private:
    std::vector<Vertex> v;
    std::vector<Face>   f;
};

#endif // MESH_H
