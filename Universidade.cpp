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
double Universidade::totalPago()
{
    double TotalPago = 0;
    for (int i = 0; i < this->professores.size(); i++)
    {
        TotalPago += this->professores[i]->getSalario();
    }
    return TotalPago;
}
void Universidade::listaProfessores()
{
    int maior = 13, a = 7;
    bool salario = false;
    for (int i = 0; i < professores.size(); i++)
    {
        if (professores[i]->getName().size() > maior)
            maior = professores[i]->getName().size();
        if (professores[i]->getSalario() >= 1000.0)
            salario = true;
    }
    if (salario)
        a++;
    for (int i = 0; i < maior + a; i++)
        cout << "_";
    cout << endl
         << "| Professores |";
    if (salario)
        cout << "  R$ |" << endl;
    else
        cout << " R$ |" << endl;
    for (int i = 0; i < professores.size(); i++)
    {
        cout << "|";
        if (professores[i]->getName().size() < maior)
            for (int j = 0; j < maior - professores[i]->getName().size(); j++)
                cout << " ";
        if (salario == false)
            cout << this->professores[i]->getName() << "| " << this->professores[i]->getSalario() << "|" << endl;
        else if (this->professores[i]->getSalario() >= 1000)
            cout << this->professores[i]->getName() << "| " << this->professores[i]->getSalario() << "|" << endl;
        else if (this->professores[i]->getSalario() >= 100)
            cout << this->professores[i]->getName() << "|  " << this->professores[i]->getSalario() << "|" << endl;
        else if (this->professores[i]->getSalario() >= 10)
            cout << this->professores[i]->getName() << "|   " << this->professores[i]->getSalario() << "|" << endl;
        else if (this->professores[i]->getSalario() >= 0)
            cout << this->professores[i]->getName() << "|    " << this->professores[i]->getSalario() << "|" << endl;
    }
    for (int i = 0; i < maior + a; i++)
        cout << "-";
    cout << endl;
}