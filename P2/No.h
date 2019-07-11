#ifndef NO_H
#define NO_H
#include <iostream>

using namespace std;

class No
{
    public:
        No(int val);
        virtual ~No();
        void setInfo(int val);
        void setProx(No* prox);
        int getInfo();
        No* getProx();

    private:
        int info;
        No* prox;
};

#endif // NO_H
