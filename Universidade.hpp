#ifndef Universidade_HPP
#define Universidade_HPP
#include "Professor.hpp"
#include "ProfHorista.hpp"
#include "ProfIntegral.hpp"
#include <vector>

class Universidade
{
private:
    vector<Professor> professores;

public:
    void addProfessor();
    int totalPago();
    void listaProfessores();
};

#endif