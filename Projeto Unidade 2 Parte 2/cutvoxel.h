#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutVoxel inativa um bloco determinado pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "cutvoxel" no arquivo para inativar um único voxel na posição x, y e z.
 */
class CutVoxel : public FiguraGeometrica{
    int x,y,z;
public:
    CutVoxel(int x, int y, int z);
    ~CutVoxel(){};
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
