#include <iostream>

using namespace std;

class NoDuplo
{
    private:
        NoDuplo *ant;
        int info;
        NoDuplo *prox;

    public:
      NoDuplo();        //PASS
      NoDuplo(int val); //PASS
      ~NoDuplo();       //PASS

      void setAnt(NoDuplo *p);  //PASS
      void setProx(NoDuplo *p); //PASS
      void setInfo(int val);    //PASS

      NoDuplo *getAnt();  //PASS
      NoDuplo *getProx(); //PASS
      int getInfo();      //PASS
};


