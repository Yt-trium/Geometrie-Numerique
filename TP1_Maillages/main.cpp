#include <iostream>
#include <string>

#include "mesh.h"

int main()
{
    std::cout << "TP1 Maillages" << std::endl;

    int flag = 0;
    Mesh *m = new Mesh();

    flag = m->import("OFF/almost_torus.off");
    std::cout << "import(\"OFF/almost_torus.off\") : " << flag << std::endl;

    return 0;
}
