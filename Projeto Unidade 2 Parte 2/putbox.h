#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutBox cria um objeto retangular determinado pelo usuário.
 * @details Com uma classe concreta, o usuário vai escrever "putbox" no arquivo para criar um objeto retangular entre as posições x0 e x1, y0 e y1, z0 e z1, nas cores r, g, b e a.
 */
class PutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
public:
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~PutBox(){};
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
