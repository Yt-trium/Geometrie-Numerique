#include <iostream>
#include <fstream>

#include "mesh.h"

Mesh::Mesh()
{

}

Mesh::~Mesh()
{

}

int Mesh::import(std::string filename)
{
    std::string line;
    int i, n_vertex, n_face, zero;
    double tmp_d_x, tmp_d_y, tmp_d_z;
    int tmp_3, tmp_id1, tmp_id2, tmp_id3;

    Vertex tmp_vertex;
    Face tmp_face;

    std::ifstream input(filename.c_str());

    if(!input.is_open())
    {
        std::cout << "ERROR : " << filename << " cannot be opened" << std::endl;
        return -1;
    }

    input >> line;
    if (line != "OFF")
    {
        std::cout << "ERROR : " << filename << " is not in OFF format" << std::endl;
        return -1;
    }

    input >> n_vertex;
    input >> n_face;
    input >> zero;

    if (zero != 0)
    {
        std::cout << "ERROR : " << filename << " is not a valid OFF file" << std::endl;
        return -1;
    }

    std::cout << "Loading " << n_vertex << " vertices..." << std::endl;

    for(i=0;i<n_vertex;i++)
    {
        input >> tmp_d_x;
        input >> tmp_d_y;
        input >> tmp_d_z;

        tmp_vertex.setCoord(tmp_d_x,tmp_d_y,tmp_d_z);

        // std::cout << tmp_d_x << " " << tmp_d_y << " " << tmp_d_z << std::endl;

        this->v.push_back(tmp_vertex);
    }

    std::cout << "Loading " << n_face << " faces..." << std::endl;

    for(i=0;i<n_face;i++)
    {
        input >> tmp_3;
        input >> tmp_id1;
        input >> tmp_id2;
        input >> tmp_id3;

        if (tmp_3 != 3)
        {
            std::cout << "ERROR : " << filename << " is not a supported OFF file" << std::endl;
            return -1;
        }

        // tmp_face;

        // std::cout << tmp_id1 << " " << tmp_id2 << " " << tmp_id3 << std::endl;

        this->f.push_back(tmp_face);
    }

    return 0;
}
