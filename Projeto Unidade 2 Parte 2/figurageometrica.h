#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief A classe FiguraGeometrica é uma classe abstrata.
 * @details A classe serve para representar objetos genéricos e instruir por meio de suas subclasses o desnhor no Sculptor. Serve, também, para armazenar os valores de r, g, b e a.
 */
class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    virtual ~FiguraGeometrica(){};
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
