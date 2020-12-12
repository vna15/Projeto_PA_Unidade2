#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutBox inativa um objeto retangular determinado pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "cutbox" no arquivo para inativar um objeto retangular entre as posições x0 e x1, y0 e y1, z0 e z1.
 */
class CutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
public:
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox(){};
    void draw(Sculptor &s);
};

#endif // CUTBOX_H
