#include "sculptor.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;


Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
   nx = _nx;
   ny = _ny;
   nz = _nz;


   v = new Voxel**[nx];
   for(int i=0;i<nx;i++){
       v[i] = new Voxel*[ny];
       for(int j=0;j<ny;j++){
           v[i][j] = new Voxel[nz];
       }
   }


}

Sculptor::~Sculptor()
{
   delete[] v[0][0];
   delete[] v[0];
   delete[] v;
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
         this -> r=r;

         this -> g=g;

         this -> b=b;

         a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
     v[x][y][z].isOn = true;
     v[x][y][z].r = r;
     v[x][y][z].g = g;
     v[x][y][z].b = b;
     v[x][y][z].a = a;

}

void Sculptor::cutVoxel(int x, int y, int z)
{
     v[x][y][z].isOn = false;
}


void Sculptor::writeOFF(char *filename)
{
      std::ofstream fout;
      std::fixed(fout);
      char *nomeArq;
      nomeArq = filename;
      fout.open(nomeArq);

      if(!fout.is_open()){
          exit(0);
      }

      fout << "OFF\n";

      int numBlocosON = nx*ny*nz;

      for(int i=0;i<nx;i++){
          for(int j=0;j<ny;j++){
              for(int k=0;k<nz;k++){
                  if(v[i][j][k].isOn==false){
                      numBlocosON--;
                  }
              }
          }
      }

      fout << numBlocosON*8 << " " << numBlocosON*6 << " " << 0 << endl;

           for(int i=0;i<nx;i++){
                for(int j=0;j<ny;j++){
                    for(int k=0;k<nz;k++){
                        if(v[i][j][k].isOn==false){

                        }else{
                            fout << k-0.5 << " " << j+0.5 << " " << i-0.5 << endl;
                            fout << k-0.5 << " " << j-0.5 << " " << i-0.5 << endl;
                            fout << k+0.5 << " " << j-0.5 << " " << i-0.5 << endl;
                            fout << k+0.5 << " " << j+0.5 << " " << i-0.5 << endl;
                            fout << k-0.5 << " " << j+0.5 << " " << i+0.5 << endl;
                            fout << k-0.5 << " " << j-0.5 << " " << i+0.5 << endl;
                            fout << k+0.5 << " " << j-0.5 << " " << i+0.5 << endl;
                            fout << k+0.5 << " " << j+0.5 << " " << i+0.5 << endl;
                        }
                    }
                }
            }

           int cont = 0;
           for(int i=0;i<nx;i++){
                for(int j=0;j<ny;j++){
                    for(int k=0;k<nz;k++){
                        if(v[i][j][k].isOn==false){

                        }else{
                            int pv = 8*cont;
                            fout << "4" << " " << pv << " " << pv+3 << " " << pv+2 << " " << pv+1 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            fout << "4" << " " << pv+4 << " " << pv+5 << " " << pv+6 << " " << pv+7 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            fout << "4" << " " << pv << " " << pv+1 << " " << pv+5 << " " << pv+4 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            fout << "4" << " " << pv << " " << pv+4 << " " << pv+7 << " " << pv+3 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            fout << "4" << " " << pv+3 << " " << pv+7 << " " << pv+6 << " " << pv+2 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            fout << "4" << " " << pv+1 << " " << pv+2 << " " << pv+6 << " " << pv+5 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                            cont++;
                        }
                    }
                }
            }


            fout.close();


}
