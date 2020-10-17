#include "Profintegral.hpp"

ProfIntegral::ProfIntegral(string n, double sm) : Professor(n)
{
    this->salarioMensal = sm;
}
double ProfIntegral::getSalario()
{
    return this->salarioMensal;
}