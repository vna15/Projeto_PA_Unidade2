#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutSphere inativa uma esfera determinada pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "cutsphere" no arquivo para inativar uma esfera com centro x, y, z e raio r.
 */
class CutSphere : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    ~CutSphere(){};
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
