#include "Universidade.hpp"
#include <iostream>
Universidade::Universidade()
{
    this->professores = *new vector<Professor *>();
}
void Universidade::addProfessor(Professor &professor)
{
    this->professores.push_back(&professor);
}
int Universidade::totalPago()
{
    int TotalPago = 0;
    for (int i = 0; i < this->professores.size(); i++)
    {
        TotalPago += this->professores[i]->getSalario();
    }
    return TotalPago;
}
void Universidade::listaProfessores()
{
    for (int i = 0; i < professores.size(); i++)
    {
        cout << this->professores[i]->getName() << " " << this->professores[i]->getSalario() << endl;
    }
}