#include <iostream>
#include <cmath>
using namespace std;

class Funcao
{
public:
    //funcao que obtem a integral da funcao pela regra do trapezio
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos)
    {
        double soma = 0, h = (limiteSuperior - limiteInferior) / intervalos;
        double baseInferior = limiteInferior, baseSuperior = baseInferior + h;
        for (int i = 0; i < intervalos; i++){
            soma += ((func(baseInferior) + func(baseSuperior)) *h/2);
            baseInferior = baseSuperior;
            baseSuperior = baseInferior + h;
        }
        return soma;
    }

    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(double input) = 0;

    // destrutor
    //virtual ~Funcao(){}
};

class Quadratica : public Funcao
{
private:
    double a, b, c;

public:
    Quadratica(double A, double B, double C)
    {
        a = A;
        b = B;
        c = C;
    }
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos);
    double func(double input)
    {
        double p1, p2, p3;
        p1 = a * input * input;
        p2 = b * input;
        p3 = c;
        return a + b + c;
    }
};
class Senoide : public Funcao
{
public:
    Senoide(){};
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos);
    double func(double input)
    {
        double p1 = sin(input);
        double p2 = input;
        return p1 / p2;
    }
};
class Linear : public Funcao
{
private:
    double a, b;

public:
    Linear(double A, double B){
        a = A;
        b = B;
    }
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos);
    double func(double input)
    {
        double p1 = a * input;
        double p2 = b;
        return p1 + p2;
    }
};

int main()
{
    double resultado;

    //cria um container de ponteiros do tipo Funcao
    Funcao *f[3];

    f[0] = new Quadratica(1, 2, 4);
    f[1] = new Senoide();
    f[2] = new Linear(1, 4);

    cout << "*** Calculo de integrais usando a regra do trapezio: ***" << endl
         << endl;
    cout << "*** Funcoes ***" << endl;
    cout << "(1) x^2 + 2x + 4" << endl;
    cout << "(2) sen(x) / x" << endl;
    cout << "(3) x + 4" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        resultado = f[i]->getIntegral(1, 4, 1000);
        cout << "Integral da Funcao (" << i + 1 << "): " << resultado;
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete f[i];
    }

    return 0;
}