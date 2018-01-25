#ifndef MESH_H
#define MESH_H

#include <vector>
#include <string>

#include "vertex.h"
#include "face.h"

class Mesh
{
public:
    Mesh();
    ~Mesh();

    int import(std::string filename);

private:
    std::vector<Vertex> v;
    std::vector<Face>   f;
};

#endif // MESH_H
