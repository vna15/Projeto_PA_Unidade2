#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutEllipsoid inativa uma elipsoide determinada pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "cutellipsoid" no arquivo para inativar uma elipsoide com centro x, y, z e raios rx, ry, rz.
 */
class CutEllipsoid : public FiguraGeometrica{
     int xcenter, ycenter, zcenter, rx, ry, rz;
public:
     CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
     ~CutEllipsoid(){};
     void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
