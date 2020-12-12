#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutVoxel cria um bloco determinado pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "putvoxel" no arquivo para criar um único voxel na posição x, y e z e nas cores r, g, b e a.
 */
class PutVoxel : public FiguraGeometrica{
    int x,y,z;
public:
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxel(){};
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
