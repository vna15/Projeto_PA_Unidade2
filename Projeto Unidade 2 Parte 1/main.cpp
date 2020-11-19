#include <iostream>
#include "sculptor.h"


using namespace std;

int main()
{
   Sculptor draw(100,100,100);
   draw.setColor(0,0.9,0.2,0.5);
   draw.putBox(0,99,0,5,0,99);
   draw.setColor(0.5,0,0,1);
   draw.putBox(20,30,6,40,20,30);
   draw.setColor(0,1,0,1);
   draw.putSphere(25,65,25,25);
   draw.setColor(0,0.5,0.8,1);
   draw.putEllipsoid(65,35,65,10,25,15);
   draw.writeOFF((char*) "DesenhoU2.off");



   return 0;

}
