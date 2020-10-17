#include "Professor.hpp"

Professor::Professor(string n)
{
    nome = n;
}
string Professor::getName() const
{
    return this->nome;
}
double Professor::getSalario()
{
    return 0.0;
}
Professor::~Professor()
{
}