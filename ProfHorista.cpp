#include "ProfHorista.hpp"

ProfHorista::ProfHorista(string n, double nht, double vh) : Professor(n)
{
    this->nrNorasTrabalhadas = nht;
    this->valorHora = vh;
}
double ProfHorista::getSalario()
{
    return this->nrNorasTrabalhadas*this->valorHora;
}
ProfHorista::~ProfHorista()
{
}