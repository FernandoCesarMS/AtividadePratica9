#ifndef ProfIntegral_HPP
#define ProfIntegral_HPP
#include "Professor.hpp"

class ProfIntegral : public Professor
{
private:
    double salarioMensal;

public:
    ProfIntegral(string n, double sm); 
    double getSalario();
    virtual ~ProfIntegral() {};
};

#endif