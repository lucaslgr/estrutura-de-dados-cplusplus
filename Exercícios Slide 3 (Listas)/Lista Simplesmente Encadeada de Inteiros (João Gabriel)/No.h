#ifndef NO_H
#define NO_H

using namespace std;

class No
{
    public:
        No();
        ~No();
        int getInfo();
        No* getProx();
        void setInfo(int val);
        void setProx(No *p);
    private:
        int info;
        No *prox;
};

#endif // NO_H
