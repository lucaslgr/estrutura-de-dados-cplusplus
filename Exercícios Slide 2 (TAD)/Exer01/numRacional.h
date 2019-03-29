class numRacional
{
    private:
        int a, b;
    public:
        numRacional(float *a, float *b);
        ~numRacional();

        static numRacional criaNumRacional();
        void setNumerador(float *a);
        void setDenominador(float *b);

        float adicao(numRacional *n);
        float subtracao(numRacional *n);
        float multiplicacao(numRacional *n);
        float divisao(numRacional *n);
        
};