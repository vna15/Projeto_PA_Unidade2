#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutEllipsoid cria uma elipsoide determinada pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "putellipsoid" no arquivo para criar uma elipsoide com centro x, y e z, raios rx, ry e rz, nas cores r, g, b e a.
 */
class PutEllipsoid : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~PutEllipsoid(){};
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
