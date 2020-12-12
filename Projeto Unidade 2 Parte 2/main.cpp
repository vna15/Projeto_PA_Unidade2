#include <iostream>
#include <vector>
#include <fstream>
#include "sculptor.h"
#include "interpretador.h"
#include "figurageometrica.h"




using namespace std;

int main()
{
   Sculptor *s1;

   Interpretador parser;

   vector<FiguraGeometrica*>figs;

   figs = parser.parse("testepa2.txt");

   s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());


   for(size_t i=0;i<figs.size();i++){
       cout << "draw" << endl;
       figs[i]->draw(*s1);
   }


   s1->writeOFF((char*) "DesenhoU2P2N.off");
   for(size_t i=0;i<figs.size();i++){
       delete figs[i];
   }
   delete s1;
   return 0;
}
