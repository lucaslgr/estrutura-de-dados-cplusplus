#ifndef NO_H
#define NO_H

#include <string>
#include <iostream>

using namespace std;


class No
{
    public:
        No();
        ~No();
        void setProx(No* p);
        No* getProx();
        void setInfo(int val);
        int getInfo();

    protected:

    private:
        int info;
        No* prox;
};

#endif // NO_H
