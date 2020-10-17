#ifndef ProfHorista_HPP
#define ProfHorista_HPP
#include "Professor.hpp"

class ProfHorista : public Professor
{
private:
    double nrNorasTrabalhadas;
    double valorHora;

public:
    ProfHorista(string n, double nht, double vh);
    double getSalario();
    virtual ~ProfHorista();
};

#endif