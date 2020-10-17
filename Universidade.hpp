#ifndef Universidade_HPP
#define Universidade_HPP
#include "Professor.cpp"
#include "ProfHorista.Cpp"
#include "ProfIntegral.cpp"
#include <vector>

class Universidade
{
private:
    vector<Professor *> professores;

public:
    Universidade();
    void addProfessor(Professor&);
    double totalPago();
    void listaProfessores();
};

#endif