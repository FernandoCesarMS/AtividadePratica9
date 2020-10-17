#ifndef Professor_HPP
#define Professor_HPP
#include <string>

using namespace std;

class Professor
{
private:
    string nome;

public:
    Professor(string n);
    string getName() const;
    virtual double getSalario() = 0;
    virtual ~Professor();
};
#endif