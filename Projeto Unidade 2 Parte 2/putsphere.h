#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutSphere cria uma esfera determinada pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "putsphere" no arquivo para criar uma esfera com centro x, y e z, raio r, nas cores r, g, b e a.
 */
class PutSphere : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    ~PutSphere(){};
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
