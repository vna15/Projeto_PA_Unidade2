#include <iostream>
#include "sculptor.h"


using namespace std;

int main()
{
   Sculptor draw(100,100,100);
   draw.setColor(1,1,1,1);
   draw.putEllipsoid(50,50,50,30,20,10);
   draw.writeOFF((char*) "cubo.off");



   return 0;

}
